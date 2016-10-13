DEL vagClientSerivce.nsmap
CD ..
wsdl2h.exe -tWsClient/cms.typemap -o vag.h WsClient/vagService.wsdl
soapcpp2.exe -x -i -pvag -C -dWsClient vag.h

DEL vag.h
CD WsClient
REN vagServiceSoap12Binding.nsmap vagClientSerivce.nsmap
DEL *Soap11BindingProxy.h
DEL *Soap11BindingProxy.cpp
DEL *Binding.nsmap

pause

