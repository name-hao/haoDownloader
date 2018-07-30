#pragma once

#include <QDialog>
#include <QVector>
#include <QString>
#include "ui_getResourcePath.h"

class getResourcePath : public QDialog
{
    Q_OBJECT

public:
    getResourcePath(QWidget *parent = Q_NULLPTR);
    void clearPanel( );
    ~getResourcePath();

private:
    Ui::getResourcePath ui;

signals:
    void sendAllResourcePath( QVector<QString>& allPath);

private slots:
    void downloadNow( );
};
