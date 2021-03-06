/*
 * Copyright (c) 2014-2015 gnome-mpv
 *
 * This file is part of GNOME MPV.
 *
 * GNOME MPV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * GNOME MPV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNOME MPV.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PREF_DIALOG_H
#define PREF_DIALOG_H

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GMPV_TYPE_PREF_DIALOG (gmpv_pref_dialog_get_type ())

G_DECLARE_FINAL_TYPE(GmpvPrefDialog, gmpv_pref_dialog, GMPV, PREF_DIALOG, GtkDialog)

GtkWidget *gmpv_pref_dialog_new(GtkWindow *parent);

G_END_DECLS

#endif
