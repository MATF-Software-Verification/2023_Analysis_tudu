/********************************************************************************
** Form generated from reading UI file 'addtaskformtudu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASKFORMTUDU_H
#define UI_ADDTASKFORMTUDU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddTaskFormTudu
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLineEdit *taskTitle;
    QPlainTextEdit *taskDesc;
    QPushButton *tuduTaskSave;
    QComboBox *taskPriority;

    void setupUi(QDialog *AddTaskFormTudu)
    {
        if (AddTaskFormTudu->objectName().isEmpty())
            AddTaskFormTudu->setObjectName(QString::fromUtf8("AddTaskFormTudu"));
        AddTaskFormTudu->setWindowModality(Qt::NonModal);
        AddTaskFormTudu->resize(540, 379);
        AddTaskFormTudu->setMouseTracking(true);
        AddTaskFormTudu->setWindowOpacity(1.000000000000000);
        scrollArea = new QScrollArea(AddTaskFormTudu);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 521, 361));
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 519, 359));
        taskTitle = new QLineEdit(scrollAreaWidgetContents);
        taskTitle->setObjectName(QString::fromUtf8("taskTitle"));
        taskTitle->setGeometry(QRect(12, 14, 391, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        taskTitle->setFont(font);
        taskTitle->setStyleSheet(QString::fromUtf8(""));
        taskDesc = new QPlainTextEdit(scrollAreaWidgetContents);
        taskDesc->setObjectName(QString::fromUtf8("taskDesc"));
        taskDesc->setGeometry(QRect(10, 80, 501, 231));
        QFont font1;
        font1.setPointSize(14);
        taskDesc->setFont(font1);
        tuduTaskSave = new QPushButton(scrollAreaWidgetContents);
        tuduTaskSave->setObjectName(QString::fromUtf8("tuduTaskSave"));
        tuduTaskSave->setGeometry(QRect(8, 320, 501, 35));
        tuduTaskSave->setStyleSheet(QString::fromUtf8("background-color: #160c28;\n"
"color: #e1efe6;\n"
"height: 35px;"));
        tuduTaskSave->setCheckable(false);
        taskPriority = new QComboBox(scrollAreaWidgetContents);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/resources/png/high_priority.png"), QSize(), QIcon::Normal, QIcon::Off);
        taskPriority->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/resources/png/mid_priority.png"), QSize(), QIcon::Normal, QIcon::Off);
        taskPriority->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/resources/png/low_priority.png"), QSize(), QIcon::Normal, QIcon::Off);
        taskPriority->addItem(icon2, QString());
        taskPriority->setObjectName(QString::fromUtf8("taskPriority"));
        taskPriority->setGeometry(QRect(410, 30, 101, 25));
        taskPriority->setEditable(false);
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(AddTaskFormTudu);

        taskPriority->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AddTaskFormTudu);
    } // setupUi

    void retranslateUi(QDialog *AddTaskFormTudu)
    {
        AddTaskFormTudu->setWindowTitle(QCoreApplication::translate("AddTaskFormTudu", "Add Task", nullptr));
        taskTitle->setPlaceholderText(QCoreApplication::translate("AddTaskFormTudu", "Add Title", nullptr));
        taskDesc->setPlaceholderText(QCoreApplication::translate("AddTaskFormTudu", "Add description", nullptr));
        tuduTaskSave->setText(QCoreApplication::translate("AddTaskFormTudu", "Save", nullptr));
        taskPriority->setItemText(0, QCoreApplication::translate("AddTaskFormTudu", "High", nullptr));
        taskPriority->setItemText(1, QCoreApplication::translate("AddTaskFormTudu", "Medium", nullptr));
        taskPriority->setItemText(2, QCoreApplication::translate("AddTaskFormTudu", "Low", nullptr));

    } // retranslateUi

};

namespace Ui {
    class AddTaskFormTudu: public Ui_AddTaskFormTudu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASKFORMTUDU_H
