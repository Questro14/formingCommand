#ifndef lan_if
#define lan_if
#include <SPI.h>
#include <Ethernet.h>


#define def_tcp_port 5025

const char CMD_IN_START[] = "INPUT:START ";
const char REQ_IDN[] = "*IDN?";
const char CMD_SET_IDN[] = "SYSTEM:CONFIG:IDN ";
const char CMD_SET_IP_ADDR[] = "SYSTEM:IPADDRESS ";
const char REQ_SET_IP_ADDR[] = "SYSTEM:IPADDRESS?";
const char CMD_SET_IP_MASK[] = "SYSTEM:IPMASK ";
const char REQ_SET_IP_MASK[] = "SYSTEM:IPMASK?";
const char CMD_SET_DEF_GATEWAY[] = "SYSTEM:IPDEFGATEWAY ";
const char REQ_SET_DEF_GATEWAY[] = "SYSTEM:IPDEFGATEWAY?";
const char CMD_SET_MAC_ADDR[] = "SYSTEM:MACADDRESS ";
const char REQ_SET_MAC_ADDR[] = "SYSTEM:MACADDRESS?";
const char CMD_IN_SELECT0[] = "INPUT:SELECT 0 ";
const char CMD_IN_SELECT1[] = "INPUT:SELECT 1 ";
const char CMD_IN_SELECT2[] = "INPUT:SELECT 2 ";
const char CMD_IN_SELECT3[] = "INPUT:SELECT 3 ";
const char CMD_IN_SELECT4[] = "INPUT:SELECT 4 ";
const char REQ_IN_SELECT[] = "INPUT:SELECT?";
const char REQ_OUT_PULSEWIDTH[] = "OUTPUT:PULSEWIDTH?";
const char CMD_OUT_PULSEWIDTH[] = "OUTPUT:PULSEWIDTH ";

const char REQ_SYSTEM_ERROR[] = "SYSTEM:ERROR?";



bool check_lan(void);
void server_start(unsigned char *mac, unsigned char *ip, unsigned char *gateway, unsigned char *subnet);
void server_stop(void);

char check_cmd(unsigned char *cmd_id, unsigned char *parameter);
bool compStr(char *char1, const char *char2);
unsigned char parStr(char *buf);
void toUpCase(char *buf);
bool parIP(char *buf, char *res);
void buf_null(char *buf);
void send_str_to_lan(String *data);

#endif
