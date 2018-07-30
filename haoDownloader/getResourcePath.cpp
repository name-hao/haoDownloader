#include "stdafx.h"
#include "getResourcePath.h"

getResourcePath::getResourcePath(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);
    setWindowFlags( windowFlags( )&~Qt::WindowContextHelpButtonHint );
}

void getResourcePath::downloadNow( )
{
    QString resourcePath = ui.resourcePath->toPlainText( );
    QVector<QString> allPath;
    allPath.push_back( resourcePath );
    //QMessageBox::information( this, "sss", resourcePath , QMessageBox::Yes, QMessageBox::No );
    this->hide( );
    emit sendAllResourcePath( allPath );
}


void getResourcePath::clearPanel( )
{
    ui.resourcePath->clear( );
}

getResourcePath::~getResourcePath()
{
}
