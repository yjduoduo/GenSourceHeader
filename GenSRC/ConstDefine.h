#ifndef CONSTDEFINE_H
#define CONSTDEFINE_H
#include "commonInclude.h"

//默认开启调试，程序完成后关闭
//调试开关
#define DEBUG



#ifdef DEBUG
#define ENTRYPRINT fprintf(stdout,"==>>file[%s]. function[%s]. line[%d].\n",__FILE__,__func__,__LINE__)
#define DATETIME fprintf(stdout,"==>>date[%s].time[%s]\n",__DATE__,__TIME__);
#else
#define SELFENTRYPRINT
#endif


typedef unsigned char U8;
typedef unsigned int U32;


//typedef void (*ExecFun)(void);












#endif // CONSTDEFINE_H
