#ifndef CONSTDEFINE_H
#define CONSTDEFINE_H
#include "commonInclude.h"

//Ĭ�Ͽ������ԣ�������ɺ�ر�
//���Կ���
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
