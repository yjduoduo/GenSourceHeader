#include "gensrcwnd.h"
#include "ui_gensrcwnd.h"



void GenSrcWnd::doGenSrcWnd(void)
{
    QObject::connect(ui->genCFilesPushBtn,SIGNAL(clicked()),this,SLOT(genCFiles()));
    QObject::connect(ui->genCppFilePushBtn,SIGNAL(clicked()),this,SLOT(genCppFiles()));
    QObject::connect(ui->closePushBtn,SIGNAL(clicked()),qApp,SLOT(closeAllWindows()));

}
U8 GenSrcWnd::JudgeEmpty(QLineEdit *lineedit)
{
    if(lineedit->text().isEmpty())
        return 1;

    return 0;
}
void GenSrcWnd::StrClear(QString &str)
{
    str.clear();
}
QString GenSrcWnd::GetLineEditText(QLineEdit *lineedit)
{
    return (lineedit->text());
}
void GenSrcWnd::StrPrint(const char *strname,QString &strval)
{
    qDebug()<<strname<<" is:"<<strval;
}
//mkdir dirs
void GenSrcWnd::GenDir(QString filename)
{
    QDir currentDir;
    currentDir.mkdir(filename);
}
//touch files
void GenSrcWnd::GenFile(QString dirname,QString filename,QString prefix)
{

    QFile file(dirname+"./"+filename);
    file.open(QIODevice::ReadWrite);
    file.write(prefix.toLocal8Bit());
    file.close();
}
//for header files
void GenSrcWnd::ContentToHead(QString headername)
{

}

void GenSrcWnd::SetHeaderFileAbsAddr(QString dirname,QString filename)
{
    LastHeaderFileAbsAddr=dirname+"./"+filename;
}
void GenSrcWnd::SetCFileAbsAddr(QString dirname,QString filename)
{
    LastCFileAbsAddr=dirname+"./"+filename;
}
void GenSrcWnd::SetCPPFileAbsAddr(QString dirname,QString filename)
{
    LastCPPFileAbsAddr=dirname+"./"+filename;
}
void AddENTERToHeader(QString & prefix)
{
    prefix+=ENTER;
}

void GenSrcWnd::Execloops(U32 times,ExecFun fun,QString &prefix)
{
    for(U32 i=0;i<times;i++)
    {
        fun(prefix);
    }
}

void GenSrcWnd::setHeaderFilePrefix(QString & prefix,QString filename)
{
    QDate currentDate;
    QString header;
    StrClear(header);
    prefix="/**********************************************************************"ENTER;
    prefix+="* $Id$			";
    prefix+=filename;
    prefix+="            ";
    prefix+=currentDate.currentDate().toString("yyyy-MM-dd");
    prefix+="   ";
    prefix+=ENTER;

    prefix+="* @file			"+filename;
    prefix+="   "ENTER;

    prefix+="* @brief	Contains all functions support for"ENTER;
    prefix+="*            "ENTER;

    prefix+="* @version	1.0"ENTER;

    prefix+="* @date		"+currentDate.currentDate().toString("dd.MM.yyyy");
    prefix+=ENTER;

    prefix+="* @author	XiaoWeilai Application Team"ENTER;

    prefix+="* "ENTER;

    prefix+="* Copyright(C) "+currentDate.currentDate().toString("yyyy")+", Weixj"ENTER;
    prefix+="* All rights reserved."ENTER;

    prefix+="*"ENTER;

    prefix+="***********************************************************************"ENTER;

    prefix+="*"ENTER;
    prefix+="*"ENTER;
    prefix+="*"ENTER;
    prefix+="*"ENTER;
    prefix+="*"ENTER;
    prefix+="*"ENTER;

    prefix+="**********************************************************************\/"ENTER;

    Execloops(2,AddENTERToHeader,prefix);
    filename.replace(".h","_H");
    filename.replace(" ","_");
    header="__"+filename.toUpper()+"_";



    prefix+="#ifndef "+header;
    prefix+=ENTER;
    prefix+="#define "+header;
    prefix+=ENTER;

    Execloops(2,AddENTERToHeader,prefix);

    //头文件
    prefix+="/* Includes ------------------------------------------------------------------- */";

    //兼容CPP定义
    Execloops(5,AddENTERToHeader,prefix);
    prefix+="#ifdef __cplusplus"ENTER;
    prefix+="extern \"C\""ENTER;
    prefix+="{"ENTER;
    prefix+="#endif"ENTER;

    Execloops(2,AddENTERToHeader,prefix);
    prefix+="/* Public Types --------------------------------------------------------------- */";

    Execloops(2,AddENTERToHeader,prefix);
    //定义宏
    prefix+="/*********************************************************************//**"ENTER;
    prefix+="* Macro defines for       "ENTER;
    prefix+="**********************************************************************/"ENTER;

    Execloops(5,AddENTERToHeader,prefix);
    prefix+="/**"ENTER;
    prefix+="* @}"ENTER;
    prefix+="*/"ENTER;

    //定义函数
    Execloops(5,AddENTERToHeader,prefix);
    prefix+="/*      functions -----------------*/"ENTER;
    Execloops(20,AddENTERToHeader,prefix);



    prefix+="/**"ENTER;
    prefix+="* @}"ENTER;
    prefix+="*/"ENTER;

    Execloops(2,AddENTERToHeader,prefix);
    prefix+="#ifdef __cplusplus"ENTER;
    prefix+="}"ENTER;
    prefix+="#endif"ENTER;



    Execloops(2,AddENTERToHeader,prefix);


    prefix+="#endif /*  "+header+"  */";
    prefix+=ENTER;

    Execloops(1,AddENTERToHeader,prefix);

    prefix+="/**"ENTER;
    prefix+="* @}"ENTER;
    prefix+="*/"ENTER;
    Execloops(1,AddENTERToHeader,prefix);
    prefix+="/* --------------------------------- End Of File ------------------------------ */";
    prefix+=ENTER;//添加最后一空行

}

void GenSrcWnd::setCFilePrefix(QString &prefix, QString filename)
{
    QDate currentDate;
    QString header;
    StrClear(header);
    prefix="/**********************************************************************"ENTER;
    prefix+="* $Id$			";
    prefix+=filename;
    prefix+="            ";
    prefix+=currentDate.currentDate().toString("yyyy-MM-dd");
    prefix+="   ";
    prefix+=ENTER;

    prefix+="* @file			"+filename;
    prefix+="   "ENTER;

    prefix+="* @brief	Contains all functions support for"ENTER;
    prefix+="*            "ENTER;

    prefix+="* @version	1.0"ENTER;

    prefix+="* @date		"+currentDate.currentDate().toString("dd.MM.yyyy");
    prefix+=ENTER;

    prefix+="* @author	XiaoWeilai Application Team"ENTER;

    prefix+="* "ENTER;

    prefix+="* Copyright(C) "+currentDate.currentDate().toString("yyyy")+", Weixj"ENTER;
    prefix+="* All rights reserved."ENTER;

    prefix+="*"ENTER;

    prefix+="***********************************************************************"ENTER;

    prefix+="*"ENTER;
    prefix+="*"ENTER;
    prefix+="*"ENTER;
    prefix+="*"ENTER;
    prefix+="*"ENTER;
    prefix+="*"ENTER;

    prefix+="**********************************************************************\/"ENTER;

    Execloops(2,AddENTERToHeader,prefix);

    filename.replace(".c",".h");
    filename.replace(" ","_");
    //添加头文件
    prefix+="/* Includes ------------------------------------------------------------------- */"ENTER;
    prefix+="#include \""+filename+"\""ENTER;


    Execloops(1,AddENTERToHeader,prefix);
    prefix+="#ifdef _"+filename.replace(".h","")+ENTER;
    prefix+="/* Private Variables ---------------------------------------------------------- */"ENTER;
    prefix+="/** @defgroup  xxxx"ENTER;
    prefix+="* @{"ENTER;
    prefix+="*/"ENTER;
    Execloops(1,AddENTERToHeader,prefix);

    Execloops(5,AddENTERToHeader,prefix);

    prefix+="/* End of Private Variables ----------------------------------------------------*/"ENTER;
    prefix+="/**"ENTER;
    prefix+="* @}"ENTER;
    prefix+="*/"ENTER;

    Execloops(1,AddENTERToHeader,prefix);
    Execloops(5,AddENTERToHeader,prefix);

    prefix+="/*********************************************************************//**"ENTER;
    prefix+="* @brief 		xxx"ENTER;
    prefix+="* @param[in] 	xxx, should be:"ENTER;
    prefix+="* 				- xxx: xx"ENTER;
    prefix+="* 				- xxx: xx"ENTER;
    prefix+="* @return      xxx"ENTER;
    prefix+="***********************************************************************/"ENTER;
    Execloops(3,AddENTERToHeader,prefix);
    prefix+="#endif /* End of Private Function*/"ENTER;

    Execloops(5,AddENTERToHeader,prefix);

    prefix+="/* Public Functions ----------------------------------------------------------- */"ENTER;
    prefix+="/** @addtogroup BOD_Public_Functions"ENTER;
    prefix+= "* @{"ENTER;
    prefix+= "*/"ENTER;
    Execloops(1,AddENTERToHeader,prefix);
    prefix+="/*********************************************************************//**"ENTER;
    prefix+="* @brief 		xxx"ENTER;
    prefix+="* @param[in] 	xxx, should be:"ENTER;
    prefix+="* 				- xxx: xx"ENTER;
    prefix+="* 				- xxx: xx"ENTER;
    prefix+="* @return      xxx"ENTER;
    prefix+="***********************************************************************/"ENTER;



    Execloops(20,AddENTERToHeader,prefix);

    prefix+="/**"ENTER;
    prefix+="* @}"ENTER;
    prefix+="*/"ENTER;
    Execloops(1,AddENTERToHeader,prefix);
    prefix+="/* --------------------------------- End Of File ------------------------------ */";
    prefix+=ENTER;//添加最后一空行
}

void GenSrcWnd::setCPPFilePrefix(QString &prefix, QString filename)
{
    QDate currentDate;
    QString header;
    StrClear(header);
    prefix="/**********************************************************************"ENTER;
    prefix+="* $Id$			";
    prefix+=filename;
    prefix+="            ";
    prefix+=currentDate.currentDate().toString("yyyy-MM-dd");
    prefix+="   ";
    prefix+=ENTER;

    prefix+="* @file			"+filename;
    prefix+="   "ENTER;

    prefix+="* @brief	Contains all functions support for"ENTER;
    prefix+="*            "ENTER;

    prefix+="* @version	1.0"ENTER;

    prefix+="* @date		"+currentDate.currentDate().toString("dd.MM.yyyy");
    prefix+=ENTER;

    prefix+="* @author	XiaoWeilai Application Team"ENTER;

    prefix+="* "ENTER;

    prefix+="* Copyright(C) "+currentDate.currentDate().toString("yyyy")+", Weixj"ENTER;
    prefix+="* All rights reserved."ENTER;

    prefix+="*"ENTER;

    prefix+="***********************************************************************"ENTER;

    prefix+="*"ENTER;
    prefix+="*"ENTER;
    prefix+="*"ENTER;
    prefix+="*"ENTER;
    prefix+="*"ENTER;
    prefix+="*"ENTER;

    prefix+="**********************************************************************\/"ENTER;

    Execloops(2,AddENTERToHeader,prefix);

    filename.replace(".cpp",".h");
    filename.replace(" ","_");
    //添加头文件
    prefix+="/* Includes ------------------------------------------------------------------- */"ENTER;
    prefix+="#include \""+filename+"\""ENTER;


    Execloops(1,AddENTERToHeader,prefix);
    prefix+="#ifdef _"+filename.replace(".h","")+ENTER;
    prefix+="/* Private Variables ---------------------------------------------------------- */"ENTER;
    prefix+="/** @defgroup  xxxx"ENTER;
    prefix+="* @{"ENTER;
    prefix+="*/"ENTER;
    Execloops(1,AddENTERToHeader,prefix);

    Execloops(5,AddENTERToHeader,prefix);

    prefix+="/* End of Private Variables ----------------------------------------------------*/"ENTER;
    prefix+="/**"ENTER;
    prefix+="* @}"ENTER;
    prefix+="*/"ENTER;

    Execloops(1,AddENTERToHeader,prefix);
    Execloops(5,AddENTERToHeader,prefix);

    prefix+="/*********************************************************************//**"ENTER;
    prefix+="* @brief 		xxx"ENTER;
    prefix+="* @param[in] 	xxx, should be:"ENTER;
    prefix+="* 				- xxx: xx"ENTER;
    prefix+="* 				- xxx: xx"ENTER;
    prefix+="* @return      xxx"ENTER;
    prefix+="***********************************************************************/"ENTER;
    Execloops(3,AddENTERToHeader,prefix);
    prefix+="#endif /* End of Private Function*/"ENTER;

    Execloops(5,AddENTERToHeader,prefix);

    prefix+="/* Public Functions ----------------------------------------------------------- */"ENTER;
    prefix+="/** @addtogroup BOD_Public_Functions"ENTER;
    prefix+= "* @{"ENTER;
    prefix+= "*/"ENTER;
    Execloops(1,AddENTERToHeader,prefix);
    prefix+="/*********************************************************************//**"ENTER;
    prefix+="* @brief 		xxx"ENTER;
    prefix+="* @param[in] 	xxx, should be:"ENTER;
    prefix+="* 				- xxx: xx"ENTER;
    prefix+="* 				- xxx: xx"ENTER;
    prefix+="* @return      xxx"ENTER;
    prefix+="***********************************************************************/"ENTER;



    Execloops(20,AddENTERToHeader,prefix);

    prefix+="/**"ENTER;
    prefix+="* @}"ENTER;
    prefix+="*/"ENTER;
    Execloops(1,AddENTERToHeader,prefix);
    prefix+="/* --------------------------------- End Of File ------------------------------ */";

}

void GenSrcWnd::genComFiles(U8 FileFlag)
{
    ENTRYPRINT;

    QString filename;
    QString execprefix;
    QString Combinename;
    QString Headername;
    QString HeaderPrefix;
    QString CFilePrefix;
    QString CPPFilePrefix;

    if(JudgeEmpty(ui->filenameLineEdit)||JudgeEmpty(ui->execLineEdit))
        return;
    StrClear(filename);
    StrClear(execprefix);
    StrClear(Combinename);
    StrClear(Headername);
    StrClear(HeaderPrefix);
    StrClear(CFilePrefix);
    StrClear(CPPFilePrefix);




    filename=GetLineEditText(ui->filenameLineEdit);
    execprefix=GetLineEditText(ui->execLineEdit);

    StrPrint("filename",filename);
    StrPrint("execprefix",execprefix);
    Combinename=filename;
    Headername.replace(" ","_");
    Combinename.replace(" ","_");

    StrPrint("Combinename",Combinename);
    if(FileFlag == CFILESFLAG){//生成C文件
        Headername=Combinename+".h";

        Combinename+=".c";

        setHeaderFilePrefix(HeaderPrefix,Headername);
        setCFilePrefix(CFilePrefix,Combinename);
        GenDir(CDIRNAME);
        GenFile(CDIRNAME,Headername,HeaderPrefix);
        GenFile(CDIRNAME,Combinename,CFilePrefix);
        SetHeaderFileAbsAddr(CDIRNAME,Headername);
        SetCFileAbsAddr(CDIRNAME,Combinename);


    }else if(FileFlag == CPPFILESFLAG){//CPP文件
        Headername=Combinename+".h";
        Combinename+=".cpp";
        setHeaderFilePrefix(HeaderPrefix,Headername);
        setCPPFilePrefix(CPPFilePrefix,Combinename);

        GenDir(CPPDIRNAME);
        GenFile(CPPDIRNAME,Headername,HeaderPrefix);
        GenFile(CPPDIRNAME,Combinename,CPPFilePrefix);
        SetHeaderFileAbsAddr(CPPDIRNAME,Headername);
        SetCPPFileAbsAddr(CPPDIRNAME,Combinename);

    }else{

    }

}

void GenSrcWnd::genCFiles(void)
{
    genComFiles(CFILESFLAG);
}


void GenSrcWnd::genCppFiles(void)
{
    genComFiles(CPPFILESFLAG);
}





















GenSrcWnd::GenSrcWnd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GenSrcWnd)
{
    ui->setupUi(this);
    doGenSrcWnd();
}

GenSrcWnd::~GenSrcWnd()
{
    delete ui;
}
