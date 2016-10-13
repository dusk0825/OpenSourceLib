//File: platsdk_service.h
//gsoap vag service name: vagService
//gsoap vag service namespace: urn:vagService
//gsoap vag service location: http://localhost:6651/ws/vagService

#include <string>
#include <vector>
#import "stlvector.h"

class vag__ResultInfo
{
	int resultCode;
	std::string resultString;
};

class vag__ConfigReq
{ 
    std::string configXml; 
};

class vag__ConfigRsp
{
	vag__ResultInfo resultInfo;
};

class vag__ResChangeNotifyReq
{ 
    char* change_no;
    int change_type;
    int object_type;
    std::string strIndexList;
    char* description;

};

class vag__ResChangeNotifyRsp
{ 
    vag__ResultInfo resultInfo;
};


class vag__wsEVENT_INFO
{
	int64_t	dwSize;                  
	std::string szEventNo;           
	std::string szEventSrcIndexcode; 
	int	nEventSrcType;              
	int nEventType;                 
	int nEventStatus;               
	int64_t tEventHappenTime;       
	int64_t tEventBeginTime;        
	int nPulseinterval;              
	std::string szEventDescInfo;     
	std::string szExtInfo;           
	std::string pExtData;            
	int nExtDataLen;                 
};

class vag__FootfallReq
{
	int	pageSize;
	int pageNo;
	int64_t eventTime;
};

class vag__FootfallRsp
{
	int pageSize;
	int pageNo;
	int64_t totalRecordNum;
	int curRecordNum;
	std::vector<vag__wsEVENT_INFO> eventInfo;
	bool result;
};

class vag__ConfirmDeleteReq
{
	int64_t eventTime;
};

class vag__ConfirmDeleteRsp
{
	bool result;
};

class vag__LoginVagReq
{
	std::string	vagIP;
	int	vagPort;
	std::string	userName;
	std::string	passWord;
	int	loginType;
};

class vag__VagRsp
{
	bool	result;
};

class vag__MQSubscribeEventReq
{
	std::string eventPubUrl;
	std::vector<std::string> devIdxCodeList;
	std::vector<std::string> listenIdxCodeList;
};

class vag__SetIOStatusReq
{
	std::string strIndexCode;	
	int	iIoNum;					
	int	iStatus;				
};

class vag__GetIOStatusReq
{
	std::string strIndexCode;	
	int iIoNum;					
};

class vag__GetIOStatusRsp
{
	bool	result;
	int		iStatus;		
};

class vag__wsBaseChanInfo
{
    std::string szChanName;                                         
    std::string szChanIndexCode;				                    
    int iChannelId;                                                 
    int iChannelEnable;                                             
    int iIsEncrypt;                                                 
    std::string strChanGuid;                                        
    std::string strSafewatchKey;                                    
};
  
class vag__wsDeviceInfo
{
    std::string szSerialNumber;										
    std::string szDevName;											
    std::string szDevIndexCode;										
    int iDevId;														
    int iDVRType;												    
    std::string szDeviceAddr;										
    std::string szUserName;											
    std::string szPassWord;											
    int iPort;                                                      
    int iDevRegType;                                                
    int iAlarmInNum;                                                
    int iAlarmOutNum;                                               
    int iAudioChanNum;                                              
    int iDiskNumber;                                                
    int iAnalogChanNum;                                             
    int iDigitChanNum;                                              
    int iStartChanNum;                                              
    std::vector<vag__wsBaseChanInfo> pstAnalogChanInfo;				
    std::vector<vag__wsBaseChanInfo> pstDigitChanInfo;				
    int iControlUnitId;
    std::string szEzvivAppkey;										
};

class vag__YSDeviceInfoReq
{
    std::vector<std::string>	indexCodes;
};

class vag__YSDeviceInfoRsp
{
    std::vector<vag__wsDeviceInfo> devInfoList;
    vag__ResultInfo resultInfo;
};

class vag__NotifyAcquireYSRsp
{
    vag__ResultInfo resultInfo;
};


int vag__RemoteConfig(vag__ConfigReq req, vag__ConfigRsp& rsp);

int vag__ResChangeNotify(vag__ResChangeNotifyReq req, vag__ResChangeNotifyRsp& rsp);

int vag__ReqFootfallInfo(vag__FootfallReq req, vag__FootfallRsp& rsp);

int vag__ReqConfirmDelete(vag__ConfirmDeleteReq req, vag__ConfirmDeleteRsp& rsp);

int vag__LoginVag(vag__LoginVagReq req, vag__VagRsp& rsp);

int vag__MQSubscribeEvent(vag__MQSubscribeEventReq req, vag__VagRsp& rsp);

int vag__SetIOStatus(vag__SetIOStatusReq req, vag__VagRsp& rsp);

int vag__GetIOStatus(vag__GetIOStatusReq req, vag__GetIOStatusRsp& rsp);

int vag__NotifyAcquireYSDevice(vag__NotifyAcquireYSRsp& rsp);

int vag__GetYSDeviceInfo(vag__YSDeviceInfoReq req, vag__YSDeviceInfoRsp& rsp);
