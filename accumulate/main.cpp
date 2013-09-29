#include <tnt/tntnet.h>
#include <cxxtools/log.h>

log_define("accumulator")

int main(int argc, char* argv[])
{
  try
  {
    log_init();

    unsigned short port = 8000;
    log_info("run accumulator on port " << port);

    tnt::Tntnet app;
    app.listen(port);
    app.mapUrl("^/$", "accumulate");
    app.mapUrl("^/([^.]+)(\\..+)?", "$1");
    app.run();
  }
  catch (const std::exception& e)
  {
    std::cerr << e.what() << std::endl;
  }
}
