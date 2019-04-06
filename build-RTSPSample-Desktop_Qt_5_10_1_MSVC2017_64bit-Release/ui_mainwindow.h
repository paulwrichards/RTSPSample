/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QLineEdit *urlEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *startBtn;
    QPushButton *stopBtn;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(658, 465);
        MainWindow->setStyleSheet(QLatin1String("QToolTip{\n"
"	color : black;\n"
"}\n"
"QWidget#centralWidget{\n"
"	background : #333333;\n"
"}\n"
"QDialog{\n"
"	background : #333333;\n"
"}\n"
"QGroupBox{\n"
"	color : white;\n"
"	margin-top : 2ex;\n"
"	border-radius : 5px;\n"
"	padding : 8px;\n"
"	padding-top : 13px;\n"
"	 border-style: outset;\n"
" 	 border-width: 2px;\n"
"	 border-color: #1f1f1f;\n"
"}\n"
"QMenuBar#menuBar{\n"
"\n"
"	background : grey;\n"
"	color : white;\n"
"	 border-bottom-style: outset;\n"
" 	 border-bottom-width: 1px;\n"
"	 border-bottom-color: #222222;\n"
"}\n"
"QMenu{\n"
"	background : grey;\n"
"	color : #1f1f1f;\n"
"}\n"
"QMenu::item:selected{\n"
"	background : #c9c9c9;\n"
"}\n"
"QStatusBar#statusBar{\n"
"	background : grey;\n"
"	color : white;\n"
"	border-top-style: outset;\n"
" 	border-top-width: 1px;\n"
"	border-top-color: #222222;\n"
"}\n"
"QPushButton{\n"
"	color : white;\n"
"	background : grey;\n"
"	padding : 8px 5px;\n"
"	border-radius : 3px;\n"
"	min-width : 60px;\n"
"}\n"
"QPushButton:hover{\n"
"	background : #c9c9c9;\n"
""
                        "}\n"
"\n"
"QPushButton:pressed{\n"
"	background : #474747;\n"
"}\n"
"\n"
"QPushButton:disabled{\n"
"	color : #474747;\n"
"}\n"
"QLineEdit{\n"
"	color : white;\n"
"	background : #111111;\n"
"	padding : 3px;\n"
"	border-radius : 3px;\n"
"	border-color : #474747;\n"
"	border-width : 1px;\n"
"	border-style : inset;\n"
"}\n"
"QTextEdit{\n"
"	color : white;\n"
"	background : #111111;\n"
"	padding : 3px;\n"
"	border-radius : 3px;\n"
"	border-color : white;\n"
"	border-width : 1px;\n"
"}\n"
"QComboBox{\n"
"	color : white;\n"
"	background : #111111;\n"
"	padding : 3px;\n"
"	min-width : 40px;\n"
"	border-radius : 3px;\n"
"	border-style : inset;\n"
"	border-width : 1px;\n"
"	border-color : #474747;\n"
"}\n"
"QComboBox::drop-down{\n"
"	\n"
"}\n"
"QComboBox QAbstractItemView{\n"
"	background-color : black;\n"
"	color : white;\n"
"}\n"
"QSlider::handle{\n"
"	background : grey;\n"
"}\n"
"QSlider::handle:hover{\n"
"	background : #c9c9c9;\n"
"}\n"
"QSlider::handle:pressed{\n"
"	background : #474747;\n"
"}\n"
"QLabel{\n"
"	colo"
                        "r : white;\n"
"}\n"
"QRadioButton{\n"
"	color : white;\n"
"}\n"
"QCheckBox{\n"
"	color : white;\n"
"}\n"
"QRadioButton::indicator{\n"
"	 border-style: outset;\n"
" 	 border-width: 2px;\n"
"	 border-color: #1f1f1f;\n"
"	background : white;\n"
"	border-radius : 6px;\n"
"}\n"
"QRadioButton::indicator:checked{\n"
"	 border-style: outset;\n"
" 	 border-width: 2px;\n"
"	 border-color: white;\n"
"	background : #1f1f1f;\n"
"	border-radius : 6px;\n"
"}\n"
"QCheckBox::indicator{\n"
"	 border-style: outset;\n"
" 	 border-width: 2px;\n"
"	 border-color: #1f1f1f;\n"
"	background : white;\n"
"}\n"
"QCheckBox::indicator:checked{\n"
"	 border-style: outset;\n"
" 	 border-width: 2px;\n"
"	 border-color: white;\n"
"	background : #1f1f1f;\n"
"}\n"
"QHeaderView::section{\n"
"	border-style : outset;\n"
"	border-width : 1px;\n"
"	border-color : #c9c9c9;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(640, 360));
        frame->setStyleSheet(QLatin1String("QFrame{\n"
"	background:black;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        urlEdit = new QLineEdit(centralWidget);
        urlEdit->setObjectName(QStringLiteral("urlEdit"));

        verticalLayout->addWidget(urlEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        startBtn = new QPushButton(centralWidget);
        startBtn->setObjectName(QStringLiteral("startBtn"));

        horizontalLayout->addWidget(startBtn);

        stopBtn = new QPushButton(centralWidget);
        stopBtn->setObjectName(QStringLiteral("stopBtn"));

        horizontalLayout->addWidget(stopBtn);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RTSPSample", nullptr));
        startBtn->setText(QApplication::translate("MainWindow", "start", nullptr));
        stopBtn->setText(QApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
