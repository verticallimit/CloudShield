#ifndef _SECURITYBASIC_H
#define _SECURITYBASIC_H

//==================================================
//数据定义
//==================================================
//端口信息结构体
struct PortNode
{
	char type[10];
	int port;
	char name[105];
}

//进程信息结构体
struct ProcessNode
{
	int pid;
	int ppid;
	char status;
	char name[105];
};




//==================================================
//引用全局变量
//==================================================




//==================================================
//对外函数借口
//==================================================






#endif