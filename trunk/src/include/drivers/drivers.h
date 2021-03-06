/*
 *  Copyright (C) 2007,2008 Sven Köhler
 *
 *  This file is part of Nupkux.
 *
 *  Nupkux is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Nupkux is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Nupkux.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _DRIVERS_H
#define _DRIVERS_H

#include <fs/devfs.h>
#include <task.h>
#include <kernel/syscall.h>
#include <signal.h>

#define REQUEST_READ	0x2EAD
#define REQUEST_WRITE	0x217E

extern UINT setup_drivers(void);

extern inline void *devicen_pdata(vnode *node);
//extern inline void set_device_pdata(vnode *node, void *pdata);
extern inline void *device_pdata(devfs_handle *handle);
extern inline void set_device_pdata(devfs_handle *handle, void *pdata);
extern inline devfs_handle *device_discr(vnode *node);
extern void device_lock(vnode *node);
extern void device_unlock(vnode *node);
extern inline pid_t requesting_pid(vnode *node);
extern inline void outportb(USHORT port, UCHAR value);
extern inline UCHAR inportb(USHORT port);
extern inline void outportw(USHORT port, USHORT value);
extern inline USHORT inportw(USHORT port);

#endif
