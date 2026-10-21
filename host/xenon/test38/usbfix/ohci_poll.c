/* Test 19: the interrupt half of libxenon's usb_cfe_timer (drivers/usb/usbmain.c) without
 * the bus daemon: usb_poll() on every bus = ohci_intr (usbfix/ohci_fix.c): completed
 * transfers from the done queue with their callbacks (usbctrl's report callback stores the
 * pad's new report and queues the next one) and root hub changes (usbhub's callback only
 * flags the hub for a scan). usb_daemon, the scan that enumerates a plugged device, stays
 * with usb_do_poll in main.c's USB loop.
 *
 * main.c's pads_io_poll calls this from inside a file write (tinyehci, the stick on EHCI,
 * waiting in udelay), on the same thread that runs usb_do_poll, so it never overlaps
 * usb_cfe_timer. Built with libxenon's flags, as ohci_fix.c (Makefile). */
#include "cfe.h"       /* as ohci_fix.c with _CFE_ */
#include "usbchap9.h"
#include "usbd.h"

extern int usb_buscnt;                 /* usbmain.c */
extern usbbus_t *usb_buses[];

void ohci_poll_all(void)
{
	int i;

	for (i = 0; i < usb_buscnt; i++)
		if (usb_buses[i])
			usb_poll(usb_buses[i]);
}
