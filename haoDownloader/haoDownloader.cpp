#include "stdafx.h"
#include "haoDownloader.h"

haoDownloader::haoDownloader(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    //ui.taskList->setItemWidget(this,)
    resourceDialog = new getResourcePath( this );
    resourceDialog->setModal( true );
    connect( resourceDialog, SIGNAL( sendAllResourcePath( QVector<QString>& ) ), this, SLOT( receiveAllPath( QVector<QString>& ) ) );
}

void haoDownloader::newTask( )
{
    resourceDialog->clearPanel( );
    resourceDialog->show( );
    //QApplication::exit( );
}

haoDownloader::~haoDownloader( )
{
    if ( !resourceDialog )
    {
        delete resourceDialog;
    }
}

void haoDownloader::closeEvent( QCloseEvent *event )
{
    //自定义关闭窗口需要的操作。
}

void haoDownloader::receiveAllPath( QVector<QString>& allPath )
{
    allResourcePath.clear( );
    allResourcePath = allPath;
    for ( QString& single : allResourcePath )
    {
        ui.taskList->addItem( single );
    }
}
