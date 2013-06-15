/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat 15. Jun 14:13:28 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_q;
    QLineEdit *lineEdit_b;
    QLineEdit *lineEdit_r;
    QLineEdit *lineEdit_a;
    QLineEdit *lineEdit_x;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_p;
    QLabel *label_5;
    QPushButton *pushButton_Subscribe;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_12;
    QPushButton *pushButton_Verify;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_v;
    QLabel *label_13;
    QLineEdit *lineEdit_y;
    QLabel *label_15;
    QLineEdit *lineEdit_e;
    QLabel *label_14;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lineEdit_M;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(707, 359);
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 80, 211, 471));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_q = new QLineEdit(gridLayoutWidget);
        lineEdit_q->setObjectName(QString::fromUtf8("lineEdit_q"));

        gridLayout->addWidget(lineEdit_q, 1, 1, 1, 1);

        lineEdit_b = new QLineEdit(gridLayoutWidget);
        lineEdit_b->setObjectName(QString::fromUtf8("lineEdit_b"));

        gridLayout->addWidget(lineEdit_b, 2, 1, 1, 1);

        lineEdit_r = new QLineEdit(gridLayoutWidget);
        lineEdit_r->setObjectName(QString::fromUtf8("lineEdit_r"));

        gridLayout->addWidget(lineEdit_r, 3, 1, 1, 1);

        lineEdit_a = new QLineEdit(gridLayoutWidget);
        lineEdit_a->setObjectName(QString::fromUtf8("lineEdit_a"));

        gridLayout->addWidget(lineEdit_a, 4, 1, 1, 1);

        lineEdit_x = new QLineEdit(gridLayoutWidget);
        lineEdit_x->setObjectName(QString::fromUtf8("lineEdit_x"));

        gridLayout->addWidget(lineEdit_x, 7, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 10, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        lineEdit_p = new QLineEdit(gridLayoutWidget);
        lineEdit_p->setObjectName(QString::fromUtf8("lineEdit_p"));

        gridLayout->addWidget(lineEdit_p, 0, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        pushButton_Subscribe = new QPushButton(gridLayoutWidget);
        pushButton_Subscribe->setObjectName(QString::fromUtf8("pushButton_Subscribe"));

        gridLayout->addWidget(pushButton_Subscribe, 9, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 6, 1, 1, 1);

        pushButton_Verify = new QPushButton(centralWidget);
        pushButton_Verify->setObjectName(QString::fromUtf8("pushButton_Verify"));
        pushButton_Verify->setGeometry(QRect(410, 250, 158, 23));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(410, 200, 158, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit->setFont(font1);
        lineEdit_v = new QLineEdit(centralWidget);
        lineEdit_v->setObjectName(QString::fromUtf8("lineEdit_v"));
        lineEdit_v->setGeometry(QRect(410, 100, 158, 20));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(430, 80, 158, 13));
        lineEdit_y = new QLineEdit(centralWidget);
        lineEdit_y->setObjectName(QString::fromUtf8("lineEdit_y"));
        lineEdit_y->setGeometry(QRect(510, 30, 158, 20));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(540, 10, 101, 16));
        lineEdit_e = new QLineEdit(centralWidget);
        lineEdit_e->setObjectName(QString::fromUtf8("lineEdit_e"));
        lineEdit_e->setGeometry(QRect(330, 30, 158, 20));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(370, 10, 101, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(310, 30, 21, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 30, 16, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(450, 160, 91, 31));
        QFont font2;
        font2.setPointSize(14);
        label_4->setFont(font2);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 0, 128, 13));
        lineEdit_M = new QLineEdit(centralWidget);
        lineEdit_M->setObjectName(QString::fromUtf8("lineEdit_M"));
        lineEdit_M->setGeometry(QRect(57, 20, 191, 20));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 60, 291, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 707, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "                   Q:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "                  B:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "                    P:", 0, QApplication::UnicodeUTF8));
        pushButton_Subscribe->setText(QApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\255\320\246\320\237", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "                   R:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "                  A:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "      \320\241\320\265\320\272\321\200\320\265\321\202\320\275\321\213\320\271 \320\272\320\273\321\216\321\207:", 0, QApplication::UnicodeUTF8));
        pushButton_Verify->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214 \320\255\320\246\320\237", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\213\320\271 \320\272\320\273\321\216\321\207:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \321\207\320\260\321\201\321\202\321\214 \320\255\320\246\320\237", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \321\207\320\260\321\201\321\202\321\214 \320\255\320\246\320\237", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "E:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Y:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\207\320\270\321\201\320\273\320\260 \320\264\320\273\321\217 \320\263\320\265\320\275\320\265\321\200\320\260\321\206\320\270\320\270 \320\272\320\273\321\216\321\207\320\265\320\262\321\213\321\205 \320\277\320\260\321\200\320\260\320\265\321\202\321\200\320\276\320\262:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
