#include <stdint.h>

#include "main.h"

#include "core.h"
#include "dmx_receiver.h"
#include "usb_debug.h"

static uint8_t packet[576];

bool core_init(void)
{
	usb_printf("DMX receiver started\r\n");

	return true;
}

void core_process(void)
{
	uint16_t len;

	len = dmx_receive(packet);

	usb_dumppacket(packet, len);
}
