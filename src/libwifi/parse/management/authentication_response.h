#ifndef LIBWIFI_PARSE_AUTH_H
#define LIBWIFI_PARSE_AUTH_H

#include <stdint.h>
#include <sys/types.h>

#include "../../core/frame/frame.h"
#include "../../core/frame/management/common.h"
#include "../../core/misc/security.h"
#include "../../core/frame/management/authentication.h"

/**
 * Parse an authentication frame into a libwifi_auth.
 *
 * @param auth A libwifi_auth
 * @param frame A libwifi_frame
 * @return 0 if successful, a negative number if not.
 */
int libwifi_parse_auth(struct libwifi_auth *auth, struct libwifi_frame *frame);

#endif