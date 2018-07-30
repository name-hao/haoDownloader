/********************************************************************************
** Form generated from reading UI file 'haoDownloader.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAODOWNLOADER_H
#define UI_HAODOWNLOADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_haoDownloaderClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *newButton;
    QPushButton *beginButton;
    QPushButton *pauseButton;
    QPushButton *deleteButton;
    QListWidget *taskList;

    void setupUi(QMainWindow *haoDownloaderClass)
    {
        if (haoDownloaderClass->objectName().isEmpty())
            haoDownloaderClass->setObjectName(QStringLiteral("haoDownloaderClass"));
        haoDownloaderClass->resize(800, 600);
        haoDownloaderClass->setMinimumSize(QSize(800, 600));
        haoDownloaderClass->setMaximumSize(QSize(800, 600));
        centralWidget = new QWidget(haoDownloaderClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(800, 600));
        centralWidget->setMaximumSize(QSize(800, 600));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 801, 601));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        newButton = new QPushButton(verticalLayoutWidget);
        newButton->setObjectName(QStringLiteral("newButton"));

        horizontalLayout->addWidget(newButton);

        beginButton = new QPushButton(verticalLayoutWidget);
        beginButton->setObjectName(QStringLiteral("beginButton"));

        horizontalLayout->addWidget(beginButton);

        pauseButton = new QPushButton(verticalLayoutWidget);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));

        horizontalLayout->addWidget(pauseButton);

        deleteButton = new QPushButton(verticalLayoutWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        horizontalLayout->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout);

        taskList = new QListWidget(verticalLayoutWidget);
        taskList->setObjectName(QStringLiteral("taskList"));

        verticalLayout->addWidget(taskList);

        haoDownloaderClass->setCentralWidget(centralWidget);

        retranslateUi(haoDownloaderClass);
        QObject::connect(newButton, SIGNAL(clicked()), haoDownloaderClass, SLOT(newTask()));

        QMetaObject::connectSlotsByName(haoDownloaderClass);
    } // setupUi

    void retranslateUi(QMainWindow *haoDownloaderClass)
    {
        haoDownloaderClass->setWindowTitle(QApplication::translate("haoDownloaderClass", "omyhao", nullptr));
        newButton->setText(QApplication::translate("haoDownloaderClass", "\346\226\260\345\273\272\344\273\273\345\212\241", nullptr));
        beginButton->setText(QApplication::translate("haoDownloaderClass", "\345\274\200\345\247\213", nullptr));
        pauseButton->setText(QApplication::translate("haoDownloaderClass", "\346\232\202\345\201\234", nullptr));
        deleteButton->setText(QApplication::translate("haoDownloaderClass", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class haoDownloaderClass: public Ui_haoDownloaderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAODOWNLOADER_H
