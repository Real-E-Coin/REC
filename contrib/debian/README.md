
Debian
====================
This directory contains files used to package real_e_coind/real_e_coin-qt
for Debian-based Linux systems. If you compile real_e_coind/real_e_coin-qt yourself, there are some useful files here.

## real_e_coin: URI support ##


real_e_coin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install real_e_coin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your real_e_coin-qt binary to `/usr/bin`
and the `../../share/pixmaps/real_e_coin128.png` to `/usr/share/pixmaps`

real_e_coin-qt.protocol (KDE)

