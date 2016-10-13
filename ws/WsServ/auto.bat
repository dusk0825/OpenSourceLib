CD ..
soapcpp2.exe -x -i -Iimport -dWsServ -q vagService WsServ/platsdk_service.h

CD WsServ
DEL vagService.h
DEL vagService.cpp
DEL vagProxy.h
DEL vagProxy.cpp

REN vagvagService.h vagService.h
REN vagvagService.cpp vagService.cpp
REN vagvagProxy.h vagProxy.h
REN vagvagProxy.cpp vagProxy.cpp

pause