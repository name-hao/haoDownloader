#pragma once

#include <QtWidgets/QMainWindow>
#include <QCloseEvent>
#include <QVector>
#include "ui_haoDownloader.h"
#include "getResourcePath.h"

class haoDownloader : public QMainWindow
{
    Q_OBJECT

public:
    haoDownloader(QWidget *parent = Q_NULLPTR);
    ~haoDownloader( );

protected:
    void closeEvent( QCloseEvent *event );
private:
    Ui::haoDownloaderClass ui;
    getResourcePath* resourceDialog;
    QVector<QString> allResourcePath;

private slots:
    void newTask( );
    void receiveAllPath( QVector<QString>& allPath );
};
