// Copyright (c) 2019 The PIVX developers
// Copyright (c) 2021 The Real E Coin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SETTINGSNETWORKWIDGET_H
#define SETTINGSNETWORKWIDGET_H

#include <QWidget>
#include <QDataWidgetMapper>
#include "qt/real_e_coin/pwidget.h"

namespace Ui {
class SettingsNetworkWidget;
}

class SettingsNetworkWidget : public PWidget
{
    Q_OBJECT

public:
    explicit SettingsNetworkWidget(Real_E_CoinGUI* _window, QWidget *parent = nullptr);
    ~SettingsNetworkWidget();

    void setMapper(QDataWidgetMapper *mapper);

private:
    Ui::SettingsNetworkWidget *ui;

Q_SIGNALS:
    void saveSettings() {};
};

#endif // SETTINGSNETWORKWIDGET_H
