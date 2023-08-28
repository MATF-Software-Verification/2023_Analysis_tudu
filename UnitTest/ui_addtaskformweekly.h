/********************************************************************************
** Form generated from reading UI file 'addtaskformweekly.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASKFORMWEEKLY_H
#define UI_ADDTASKFORMWEEKLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddTaskFormWeekly
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QDateTimeEdit *dateTimeEnd;
    QLineEdit *taskTitle;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *taskDesc;
    QHBoxLayout *horizontalLayout;
    QDateTimeEdit *dateTimeStart;
    QPushButton *pbSaveTask;
    QLabel *label_4;
    QPushButton *pbDeleteTask;

    void setupUi(QDialog *AddTaskFormWeekly)
    {
        if (AddTaskFormWeekly->objectName().isEmpty())
            AddTaskFormWeekly->setObjectName(QString::fromUtf8("AddTaskFormWeekly"));
        AddTaskFormWeekly->resize(501, 500);
        gridLayout = new QGridLayout(AddTaskFormWeekly);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        scrollArea = new QScrollArea(AddTaskFormWeekly);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 481, 480));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        dateTimeEnd = new QDateTimeEdit(scrollAreaWidgetContents);
        dateTimeEnd->setObjectName(QString::fromUtf8("dateTimeEnd"));

        gridLayout_2->addWidget(dateTimeEnd, 4, 0, 1, 1);

        taskTitle = new QLineEdit(scrollAreaWidgetContents);
        taskTitle->setObjectName(QString::fromUtf8("taskTitle"));
        taskTitle->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        taskTitle->setFont(font);
        taskTitle->setMaxLength(1024);
        taskTitle->setFrame(false);

        gridLayout_2->addWidget(taskTitle, 0, 0, 1, 1);

        frame_3 = new QFrame(scrollAreaWidgetContents);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        gridLayout_2->addWidget(frame_3, 11, 0, 1, 1);

        taskDesc = new QPlainTextEdit(scrollAreaWidgetContents);
        taskDesc->setObjectName(QString::fromUtf8("taskDesc"));
        QFont font1;
        font1.setPointSize(14);
        taskDesc->setFont(font1);
        taskDesc->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(taskDesc);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout_2->addWidget(taskDesc, 10, 0, 1, 1);

        dateTimeStart = new QDateTimeEdit(scrollAreaWidgetContents);
        dateTimeStart->setObjectName(QString::fromUtf8("dateTimeStart"));

        gridLayout_2->addWidget(dateTimeStart, 2, 0, 1, 1);

        pbSaveTask = new QPushButton(scrollAreaWidgetContents);
        pbSaveTask->setObjectName(QString::fromUtf8("pbSaveTask"));
        QFont font2;
        pbSaveTask->setFont(font2);
        pbSaveTask->setStyleSheet(QString::fromUtf8("background-color: #160c28;\n"
"color: #e1efe6;\n"
"height: 35px;\n"
"font-size: 20px;"));

        gridLayout_2->addWidget(pbSaveTask, 12, 0, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        pbDeleteTask = new QPushButton(scrollAreaWidgetContents);
        pbDeleteTask->setObjectName(QString::fromUtf8("pbDeleteTask"));
        pbDeleteTask->setStyleSheet(QString::fromUtf8("background-color: #C20114;\n"
"color: #e1efe6;\n"
"height: 35px;\n"
"font-size: 20px;"));

        gridLayout_2->addWidget(pbDeleteTask, 13, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(AddTaskFormWeekly);

        QMetaObject::connectSlotsByName(AddTaskFormWeekly);
    } // setupUi

    void retranslateUi(QDialog *AddTaskFormWeekly)
    {
        AddTaskFormWeekly->setWindowTitle(QCoreApplication::translate("AddTaskFormWeekly", "Add New Task", nullptr));
        label_5->setText(QCoreApplication::translate("AddTaskFormWeekly", "To", nullptr));
        taskTitle->setPlaceholderText(QCoreApplication::translate("AddTaskFormWeekly", "Add title", nullptr));
        taskDesc->setPlaceholderText(QCoreApplication::translate("AddTaskFormWeekly", "Add description", nullptr));
        pbSaveTask->setText(QCoreApplication::translate("AddTaskFormWeekly", "Save", nullptr));
        label_4->setText(QCoreApplication::translate("AddTaskFormWeekly", "From", nullptr));
        pbDeleteTask->setText(QCoreApplication::translate("AddTaskFormWeekly", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTaskFormWeekly: public Ui_AddTaskFormWeekly {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASKFORMWEEKLY_H
