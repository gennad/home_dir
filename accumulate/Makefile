all: accumulate

accumulate: accumulate.o accumulator.o main.o
	${CXX} -o $@ $^ ${LDFLAGS}

.SUFFIXES: .ecpp
ECPPC=/usr/local/bin/ecppc
CXXFLAGS+=-I/usr/local/include -O2
LDFLAGS+=-L/usr/local/lib -ltntnet -lcxxtools

.ecpp.cpp:
	${ECPPC} ${ECPPFLAGS} ${ECPPFLAGS_CPP} -o $@ $<



#all: accumulate.so

#test: all
#${TNTNET} tntnet.xml

#accumulate.so: accumulate.o
#	${CXX} -o $@ $^ ${LDFLAGS}

#.SUFFIXES: .ecpp .gif .jpg .css .js .cpp
#ECPPC=/usr/local/bin/ecppc
#TNTNET=/usr/local/bin/tntnet
#CXXFLAGS+=-I/usr/local/include -fPIC -O2
#LDFLAGS+=-dynamiclib -L/usr/local/lib -ltntnet -lcxxtools

#.ecpp.cpp:
#${ECPPC} ${ECPPFLAGS} ${ECPPFLAGS_CPP} -o $@ $<

.gif.cpp:
	${ECPPC} ${ECPPFLAGS} -m image/gif ${ECPPFLAGS_GIF} -b -o $@ $<
.jpg.cpp:
	${ECPPC} ${ECPPFLAGS} -m image/jpg ${ECPPFLAGS_JPG} -b -o $@ $<
.png.cpp:
	${ECPPC} ${ECPPFLAGS} -m image/png ${ECPPFLAGS_PNG} -b -o $@ $<
.ico.cpp:
	${ECPPC} ${ECPPFLAGS} -m image/x-icon ${ECPPFLAGS_ICO} -b -o $@ $<
.css.cpp:
	${ECPPC} ${ECPPFLAGS} -m text/css ${ECPPFLAGS_CSS} -b -o $@ $<
.js.cpp:
	${ECPPC} ${ECPPFLAGS} -m application/javascript ${ECPPFLAGS_JS} -b -o $@ $<
