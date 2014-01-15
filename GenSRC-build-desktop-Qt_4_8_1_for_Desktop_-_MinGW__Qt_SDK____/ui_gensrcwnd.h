/********************************************************************************
** Form generated from reading UI file 'gensrcwnd.ui'
**
** Created: Wed Jan 15 15:07:49 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENSRCWND_H
#define UI_GENSRCWND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GenSrcWnd
{
public:
    QWidget *centralWidget;
    QPushButton *genCFilesPushBtn;
    QLabel *filenameLabel;
    QLineEdit *execLineEdit;
    QLineEdit *filenameLineEdit;
    QLabel *label_3;
    QPushButton *closePushBtn;
    QPushButton *genCppFilePushBtn;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *execLable;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GenSrcWnd)
    {
        if (GenSrcWnd->objectName().isEmpty())
            GenSrcWnd->setObjectName(QString::fromUtf8("GenSrcWnd"));
        GenSrcWnd->resize(593, 379);
        centralWidget = new QWidget(GenSrcWnd);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        genCFilesPushBtn = new QPushButton(centralWidget);
        genCFilesPushBtn->setObjectName(QString::fromUtf8("genCFilesPushBtn"));
        genCFilesPushBtn->setGeometry(QRect(50, 150, 121, 131));
        filenameLabel = new QLabel(centralWidget);
        filenameLabel->setObjectName(QString::fromUtf8("filenameLabel"));
        filenameLabel->setGeometry(QRect(310, 30, 36, 12));
        execLineEdit = new QLineEdit(centralWidget);
        execLineEdit->setObjectName(QString::fromUtf8("execLineEdit"));
        execLineEdit->setGeometry(QRect(42, 70, 161, 51));
        filenameLineEdit = new QLineEdit(centralWidget);
        filenameLineEdit->setObjectName(QString::fromUtf8("filenameLineEdit"));
        filenameLineEdit->setGeometry(QRect(250, 70, 261, 61));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 70, 16, 16));
        closePushBtn = new QPushButton(centralWidget);
        closePushBtn->setObjectName(QString::fromUtf8("closePushBtn"));
        closePushBtn->setGeometry(QRect(400, 150, 141, 131));
        genCppFilePushBtn = new QPushButton(centralWidget);
        genCppFilePushBtn->setObjectName(QString::fromUtf8("genCppFilePushBtn"));
        genCppFilePushBtn->setGeometry(QRect(200, 150, 171, 131));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 30, 68, 14));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        execLable = new QLabel(widget);
        execLable->setObjectName(QString::fromUtf8("execLable"));

        gridLayout->addWidget(execLable, 0, 0, 1, 1);

        GenSrcWnd->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GenSrcWnd);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 593, 17));
        GenSrcWnd->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GenSrcWnd);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        GenSrcWnd->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GenSrcWnd);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GenSrcWnd->setStatusBar(statusBar);

        retranslateUi(GenSrcWnd);

        QMetaObject::connectSlotsByName(GenSrcWnd);
    } // setupUi

    void retranslateUi(QMainWindow *GenSrcWnd)
    {
        GenSrcWnd->setWindowTitle(QApplication::translate("GenSrcWnd", "\344\273\243\347\240\201\345\212\251\346\211\213", 0, QApplication::UnicodeUTF8));
        genCFilesPushBtn->setText(QApplication::translate("GenSrcWnd", "\347\224\237\346\210\220C", 0, QApplication::UnicodeUTF8));
        filenameLabel->setText(QApplication::translate("GenSrcWnd", "\346\226\207\344\273\266\345\220\215", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("GenSrcWnd", "_", 0, QApplication::UnicodeUTF8));
        closePushBtn->setText(QApplication::translate("GenSrcWnd", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        genCppFilePushBtn->setText(QApplication::translate("GenSrcWnd", "\347\224\237\346\210\220CPP", 0, QApplication::UnicodeUTF8));
        execLable->setText(QApplication::translate("GenSrcWnd", "\345\212\250\344\275\234", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GenSrcWnd: public Ui_GenSrcWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENSRCWND_H
