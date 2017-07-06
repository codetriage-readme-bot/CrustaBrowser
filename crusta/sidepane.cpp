/* ============================================================
* Crusta - Qt5 webengine browser
* Copyright (C) 2017 Anmol Gautam <anmol@crustabrowser.com>
*
* THIS FILE IS A PART OF CRUSTA
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */

#include "sidepane.h"
#include <QLabel>


SidePaneButton::SidePaneButton(){
    setStyleSheet("QPushButton{border: none;margin: 0}");
    setFixedSize(27,27);
}

SidePane::SidePane(){
    QHBoxLayout* hbox=new QHBoxLayout();
    QVBoxLayout* vbox=new QVBoxLayout();
    vbox->addWidget(history);
    history->setIcon(QIcon(":/res/drawables/pane_history.svg"));
    vbox->addWidget(bookmarks);
    bookmarks->setIcon(QIcon(":/res/drawables/pane_bookmark.svg"));
    vbox->addWidget(downloads);
    downloads->setIcon(QIcon(":/res/drawables/pane_download.svg"));
    QLabel* flexilabel=new QLabel();
    vbox->addWidget(flexilabel);
    vbox->addWidget(add_pane_btn);
    add_pane_btn->setIcon(QIcon(":/res/drawables/pane_add.svg"));
    vbox->setSpacing(20);
    hbox->addLayout(vbox);

    connect(history,&QPushButton::clicked,this,[this,hbox]{

    });

    setLayout(hbox);
    setStyleSheet("background-color: #404244");
    setFixedWidth(48);
}