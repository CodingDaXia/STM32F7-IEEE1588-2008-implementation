/*
 * ptpv2_message_delay_request.h
 *
 *  Created on: 5 lis 2016
 *      Author: Mat
 */

#ifndef PTPV2_MESSAGE_DELAY_REQUEST_H_
#define PTPV2_MESSAGE_DELAY_REQUEST_H_

#include "ptpv2_header.h"

typedef struct __attribute__((__packed__)) {
	ptpv2_message_common_header_t header;
	uint8_t originTimestamp[10];
} ptpv2_message_delay_request_t;

#endif /* PTPV2_MESSAGE_DELAY_REQUEST_H_ */
