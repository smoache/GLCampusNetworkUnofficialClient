#include "stdafx.h"
#include "common.h"

#ifdef __IEDON_DEBUG__
// ��������
const char *FUCK = "\
<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\"> \
<html xmlns=\"http://www.w3.org/1999/xhtml\"> \
<head> \
<meta http-equiv=\"Content-Type\" content=\"text/html; charset=gb2312\">\
<meta id=\"viewport\" name=\"viewport\" content=\"target-densitydpi=device-dpi,width=640px,user-scalable=1\">\
<meta http-equiv=\"X-UA-Compatible\" content=\"IE=9; IE=8; IE=7; IE=EDGE\">\
<title></title> \
<!--Dr.COMWebLoginID_0.htm-->\
<link rel=\"stylesheet\" type=\"text/css\" href=\"b82.css\" /><!--bootstrap.min.css-->\
\
<script type=\"text/javascript\" src=\"a42.js\"></script><!--jquery1.11.3.min.js-->\
\
<script>\
document.write('<script language=javascript src=\"a41.js?version=1.4_'+(new Date()).valueOf()+'\"><\/script>');\
document.write('<script language=javascript src=\"'+window.location.protocol + '//' + window.location.hostname + ':801/eportal/extern/0115/config.js?version=1.4_'+(new Date()).valueOf()+'\"><\/script>');\
</script>\
\
<script type=\"text/javascript\">\
sv=0;sv1=0;v6='http://[::]:9002/v6                                     ';myv6ip='                                       ';v4serip='10.0.98.1'      ;m46=0;v46ip='10.201.229.2'                           ;\
vid=0   ;mip=010201229002;Gno=0000;vlanid=\"0\"   ;AC=\"\";                          ipm=\"0a006201\";ss1=\"0010f3644146\";ss2=\"0000\";ss3=\"0ac9e502\";ss4=\"000000000000\";ss5=\"10.201.229.2\"   ;ss6=\"10.0.98.1\"      ;timet=1543567030; \
osele=0;//1=������\
domain='[::]';// ////////////////////////////////////////\
\
/** �ߵ���� start */\
//1.��������\
portalid='';//�Ż�ID\
portalname='';//�Ż�����\
//2.��ѡ����\
portalver='';//�Ż��汾\
serialno='';//���к�\
logourl='';//�Ż�logo\
bannerurl='';//������\
welcome='';//��ӭ��\
businessurl='';//ҵ��ӿ�\
//3.��·����\
authexenable='0';//�Ƿ�������·��չģʽ\
authtype=1;//��¼Э��\
authloginIP='';//��¼IP\
authloginport=801;//��¼�˿�\
authloginpath='/eportal/?c=ACSetting&a=Login';//��¼·��\
authloginparam=''; //��¼����\
authuserfield='DDDDD';//�˺Žڵ�\
authpassfield='upass';//����ڵ�\
terminalidentity=1;//�ն�ʶ���ʶ �����ó���д\
authlogouttype=1;//ע��Э��\
authlogoutIP='';//ע��IP\
authlogoutport=80;//ע���˿�\
authlogoutpath='/eportal/?c=ACSetting&a=Logout&ver=1.0';//ע��·��\
authlogoutparam='';//ע������\
authlogoutpost='';//ע��post����\
querydelay=0;//��¼����ʱ��ѯ����״̬\
querytype=1;//״̬��ѯЭ��\
queryIP='';//״̬��ѯIP	\
queryport=80;//״̬��ѯ�˿�\
querypost='';//״̬��ѯpost����\
querypath='/eportal/?c=ACSetting&a=Query';//״̬��ѯ·��\
queryparam='';//״̬��ѯ����\
authsuccess='Dr.COMWebLoginID_3.htm';//��¼�ɹ���־\
authfail='Dr.COMWebLoginID_2.htm';//��¼ʧ�ܱ�־\
isquery=0;\
authhost='';\
authoffpost='';\
charset='gb2312';//ҳ�����\
exparam=0;//��չ��־λ\
//4.��Ӫ��ѡ��\
carrier='{\"yys\":{\"title\":\"��������\",\"mode\":\"radiobutton\",\"data\":[{\"id\":\"1\",\"name\":\"У԰�û�\",\"suffix\":\"@xyw\"},{\"id\":\"2\",\"name\":\"У԰����\",\"suffix\":\"@dx\"},{\"id\":\"3\",\"name\":\"У԰��ͨ\",\"suffix\":\"@lt\"},{\"id\":\"4\",\"name\":\"У԰����\",\"suffix\":\"\"}],\"defaultID\":\"1\"}}';//��Ӫ��ѡ��\
//5.���ƷǶߵ�ͻ��˵�½\
//��ԭ��Dr.COMWebLoginID_ �ĳ�: Dr.COM1.0WebLoginID_\
/** �ߵ���� end */\
\
var programUrl = window.location.protocol + \"//\" + window.location.hostname + \":801/eportal/extern/0115/\";\
newComm.setArgsCookies(programUrl,vlanid,ss5);\
\
// �����豸:0-������1-PC��2-�ֻ���3-ƽ��\
var iTermType = normalFun.getTermType();\
if(iTermType==2){\
    newComm.setNessArg('mobile_79');\
}else{\
    newComm.setNessArg('pc_79');\
}\
newComm.setNessJs();\
\
//���ͳ������\
static_mark=\"000000\";\
slider_mark=\"000000\";\
\
hnaSetAdCount('1008', ss4, '', ss5, ss4);\
\
</script>\
\
</head>\
\
<body>\
</body>\
</html>\
<script type=\"text/javascript\">\
$(function(){\
    newComm.setNessSett();\
});\
</script>";
#endif

/*
	BASE64 ����
*/
static const char *base64char = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
char * base64_encode(const unsigned char * bindata, char * base64, int binlength)
{
	int i, j;
	unsigned char current;

	for (i = 0, j = 0; i < binlength; i += 3)
	{
		current = (bindata[i] >> 2);
		current &= (unsigned char)0x3F;
		base64[j++] = base64char[(int)current];

		current = ((unsigned char)(bindata[i] << 4)) & ((unsigned char)0x30);
		if (i + 1 >= binlength)
		{
			base64[j++] = base64char[(int)current];
			base64[j++] = '=';
			base64[j++] = '=';
			break;
		}
		current |= ((unsigned char)(bindata[i + 1] >> 4)) & ((unsigned char)0x0F);
		base64[j++] = base64char[(int)current];

		current = ((unsigned char)(bindata[i + 1] << 2)) & ((unsigned char)0x3C);
		if (i + 2 >= binlength)
		{
			base64[j++] = base64char[(int)current];
			base64[j++] = '=';
			break;
		}
		current |= ((unsigned char)(bindata[i + 2] >> 6)) & ((unsigned char)0x03);
		base64[j++] = base64char[(int)current];

		current = ((unsigned char)bindata[i + 2]) & ((unsigned char)0x3F);
		base64[j++] = base64char[(int)current];
	}
	base64[j] = '\0';
	return base64;
}

static const unsigned char g_pMap[256] =
{
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255,  62, 255, 255, 255,  63,
	52,  53,  54,  55,  56,  57,  58,  59,  60,  61, 255, 255,
	255, 254, 255, 255, 255,   0,   1,   2,   3,   4,   5,   6,
	7,   8,   9,  10,  11,  12,  13,  14,  15,  16,  17,  18,
	19,  20,  21,  22,  23,  24,  25, 255, 255, 255, 255, 255,
	255,  26,  27,  28,  29,  30,  31,  32,  33,  34,  35,  36,
	37,  38,  39,  40,  41,  42,  43,  44,  45,  46,  47,  48,
	49,  50,  51, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255
};
bool base64_decode(const char *strIn, unsigned char *pOut, size_t *uOutLen)
{
	size_t t, x, y, z;
	unsigned char c;
	size_t g = 3;

	//ASSERT((pIn != NULL) && (uInLen != 0) && (pOut != NULL) && (uOutLen != NULL));
	size_t len = strlen(strIn);
	for (x = y = z = t = 0; x < len; x++)
	{
		c = g_pMap[(const unsigned char)strIn[x]];
		if (c == 255) continue;
		if (c == 254) { c = 0; g--; }

		t = (t << 6) | c;

		if (++y == 4)
		{
			if ((z + g) > *uOutLen) { return false; } // Buffer overflow
			pOut[z++] = (unsigned char)((t >> 16) & 255);
			if (g > 1) pOut[z++] = (unsigned char)((t >> 8) & 255);
			if (g > 2) pOut[z++] = (unsigned char)(t & 255);
			y = t = 0;
		}
	}

	*uOutLen = z;
	return true;
}

char * encodePassword(const unsigned char * src, int srcLen, char * out)
{
	base64_encode(src, out, srcLen);

	// �Զ���BASE64
	size_t outLen = strlen(out);
	for (size_t i = 0; i < outLen; i++)
	{
		if (out[i] == '+') { out[i] = '#'; continue; }
		if (out[i] == '/') { out[i] = '$'; continue; }
	}

	// ����BASE64�����ĵ��ں�
	for (size_t i = 0; *(out + i) != '\0'; i++)
	{
		if (*(out + i) == '=') {
			*(out + i) = '\0';
			// break; // ȥ��ע�����ܸ��ߣ�����ע�͸��Ӱ�ȫ
		}
	}

	return out;
}

char * decodePassword(char *szPassword)
{
	size_t len = strlen(szPassword);
	if (len == 0) return nullptr;
	int mod_len = 4 - len % 4;

	size_t bufferLength = len * 4 + 1;
	char * buffer = new char[bufferLength];
	strcpy_s(buffer, bufferLength, szPassword);

	// ��ԭ�ɱ�׼ BASE64
	for (size_t i = 0; i < len; i++)
	{
		if (buffer[i] == '#') { buffer[i] = '+'; continue; }
		if (buffer[i] == '$') { buffer[i] = '/'; continue; }
	}
	for (; mod_len > 0; mod_len--)
	{
		strcat(buffer, "=");
	}

	size_t outLen = len;
	char * szOutBuffer = new char[len + 1];
	memset(szOutBuffer, 0, len + 1);
	base64_decode(buffer, (unsigned char *)szOutBuffer, &outLen);
	strcpy_s(szPassword, len, szOutBuffer);

	delete[]szOutBuffer;
	delete[]buffer;
	return szPassword;
}

// ��ȡ GET �е�����
std::string _GET(const std::string & get, const char *name)
{
	return _URLFIND(get, name);
}

std::string _URLFIND(const std::string & url, const char *name)
{
	std::string var(name);
	var.append("=");
	size_t len = var.length();
	std::string ret;

	size_t pos1 = url.find(var);
	size_t pos2 = url.find("&", pos1 + len);
	if (pos1 == std::string::npos)
	{
		return ret;
	}
	if (pos2 == std::string::npos)
	{
		ret = url.substr(pos1 + len, url.length() - pos1 - len);
	}
	else
	{
		ret = url.substr(pos1 + len, pos2 - pos1 - len);
	}
	return ret;
}

// ��ȡ COOKIE �е�����
std::string _COOKIE(const std::string & cookie, const char *name)
{
	std::string var(name);
	var.append("=");
	size_t len = var.length();
	std::string ret;

	size_t pos1 = cookie.find(var);
	size_t pos2 = cookie.find(";", pos1 + len);
	if (pos1 == std::string::npos)
	{
		return ret;
	}
	if (pos2 == std::string::npos)
	{
		ret = cookie.substr(pos1 + len, cookie.length() - pos1 - len);
	}
	else
	{
		ret = cookie.substr(pos1 + len, pos2 - pos1 - len);
	}
	return ret;
}