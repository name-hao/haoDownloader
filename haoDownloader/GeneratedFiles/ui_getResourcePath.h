/********************************************************************************
** Form generated from reading UI file 'getResourcePath.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETRESOURCEPATH_H
#define UI_GETRESOURCEPATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_getResourcePath
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *downloadButton;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *resourcePath;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addBTButton;
    QFrame *line;
    QPushButton *addManyBtButton;

    void setupUi(QDialog *getResourcePath)
    {
        if (getResourcePath->objectName().isEmpty())
            getResourcePath->setObjectName(QStringLiteral("getResourcePath"));
        getResourcePath->resize(400, 260);
        getResourcePath->setMinimumSize(QSize(400, 260));
        getResourcePath->setMaximumSize(QSize(400, 260));
        getResourcePath->setContextMenuPolicy(Qt::DefaultContextMenu);
        getResourcePath->setStyleSheet(QStringLiteral("background:#ffffff;"));
        layoutWidget = new QWidget(getResourcePath);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 201, 361, 51));
        hboxLayout = new QHBoxLayout(layoutWidget);
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(11, 11, 11, 11);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        downloadButton = new QPushButton(layoutWidget);
        downloadButton->setObjectName(QStringLiteral("downloadButton"));
        downloadButton->setMaximumSize(QSize(400, 40));
        QFont font;
        font.setFamily(QStringLiteral("Source Code Pro"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        downloadButton->setFont(font);
        downloadButton->setContextMenuPolicy(Qt::CustomContextMenu);
        downloadButton->setAutoFillBackground(false);
        downloadButton->setStyleSheet(QStringLiteral("background:#0f97ff;color:white;box-shadow:0 0 0 0;border:1px solid #0f97ff;"));

        hboxLayout->addWidget(downloadButton);

        verticalWidget = new QWidget(getResourcePath);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setGeometry(QRect(20, 20, 361, 171));
        verticalWidget->setMaximumSize(QSize(400, 16777215));
        verticalWidget->setStyleSheet(QStringLiteral("border:1px solid #C0C0C0;"));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        resourcePath = new QPlainTextEdit(verticalWidget);
        resourcePath->setObjectName(QStringLiteral("resourcePath"));
        resourcePath->setStyleSheet(QStringLiteral("border-bottom:0px;"));

        verticalLayout->addWidget(resourcePath);

        widget = new QWidget(verticalWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background:#f2f2f2;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addBTButton = new QPushButton(widget);
        addBTButton->setObjectName(QStringLiteral("addBTButton"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addBTButton->sizePolicy().hasHeightForWidth());
        addBTButton->setSizePolicy(sizePolicy);
        addBTButton->setMinimumSize(QSize(0, 33));
        addBTButton->setMaximumSize(QSize(16777215, 33));
        addBTButton->setStyleSheet(QStringLiteral("background:#f2f2f2;color:#9b9b9b;border-right:0px;"));

        horizontalLayout->addWidget(addBTButton);

        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setMaximumSize(QSize(16777215, 20));
        line->setStyleSheet(QStringLiteral("border: 0px;background-color: #DCDCDC;width:1px;"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        addManyBtButton = new QPushButton(widget);
        addManyBtButton->setObjectName(QStringLiteral("addManyBtButton"));
        addManyBtButton->setEnabled(false);
        sizePolicy.setHeightForWidth(addManyBtButton->sizePolicy().hasHeightForWidth());
        addManyBtButton->setSizePolicy(sizePolicy);
        addManyBtButton->setMinimumSize(QSize(0, 33));
        addManyBtButton->setMaximumSize(QSize(16777215, 33));
        addManyBtButton->setStyleSheet(QStringLiteral("background:#f2f2f2;color:#9b9b9b;border-left:0px;"));

        horizontalLayout->addWidget(addManyBtButton);


        verticalLayout->addWidget(widget);


        retranslateUi(getResourcePath);
        QObject::connect(downloadButton, SIGNAL(clicked()), getResourcePath, SLOT(downloadNow()));

        QMetaObject::connectSlotsByName(getResourcePath);
    } // setupUi

    void retranslateUi(QDialog *getResourcePath)
    {
        getResourcePath->setWindowTitle(QApplication::translate("getResourcePath", "\346\226\260\345\273\272\344\273\273\345\212\241", nullptr));
        downloadButton->setText(QApplication::translate("getResourcePath", "\347\253\213\345\215\263\344\270\213\350\275\275", nullptr));
        resourcePath->setPlaceholderText(QApplication::translate("getResourcePath", "\345\217\257\346\267\273\345\212\240\350\277\205\351\233\267\343\200\201\347\243\201\345\212\233\347\255\211\351\223\276\346\216\245", nullptr));
        addBTButton->setText(QApplication::translate("getResourcePath", "\346\267\273\345\212\240BT\344\273\273\345\212\241", nullptr));
        addManyBtButton->setText(QApplication::translate("getResourcePath", "\346\211\271\351\207\217\346\267\273\345\212\240\344\273\273\345\212\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class getResourcePath: public Ui_getResourcePath {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETRESOURCEPATH_H
