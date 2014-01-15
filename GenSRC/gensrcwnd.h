#ifndef GENSRCWND_H
#define GENSRCWND_H

#include <QMainWindow>
#include <QtGui>
#include "IncludeAll.h"



typedef void (*ExecFun)(QString &prefix);



namespace Ui {
class GenSrcWnd;
}

class GenSrcWnd : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit GenSrcWnd(QWidget *parent = 0);
    ~GenSrcWnd();

protected:
    void doGenSrcWnd(void);
    U8 JudgeEmpty(QLineEdit *lineedit);
    void StrClear(QString &str);
    QString GetLineEditText(QLineEdit *lineedit);
    void StrPrint(const char *strname,QString &strval);
    void genComFiles(U8 FileFlag);
    
    void GenFile(QString dirname,QString filename,QString prefix);
    void GenDir(QString filename);
    void ContentToHead(QString headername);
    void SetHeaderFileAbsAddr(QString dirname,QString filename);
    void SetCFileAbsAddr(QString dirname,QString filename);
    void SetCPPFileAbsAddr(QString dirname,QString filename);
    void setHeaderFilePrefix(QString & prefix, QString filename);
    void setCFilePrefix(QString & prefix, QString filename);
    void setCPPFilePrefix(QString & prefix, QString filename);

    void Execloops(U32 times,ExecFun fun, QString &prefix);
    void addENTER(QString & prefix);
private:
    Ui::GenSrcWnd *ui;
    QString LastHeaderFileAbsAddr;
    QString LastCFileAbsAddr;
    QString LastCPPFileAbsAddr;
private slots:
    void genCFiles(void);
    void genCppFiles(void);
};

#endif // GENSRCWND_H
