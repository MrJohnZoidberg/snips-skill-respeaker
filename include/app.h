#ifndef __COMMON_H__
	#include <common.h>
#endif

#ifndef __MQTT_H__
	#include <mqtt.h>
#endif

#define CLIENT_ID_LEN 10

void check_nightmode(void);
void publish_callback(void** unused, struct mqtt_response_publish *published);
void *client_refresher(void* client);
char *generate_client_id(void);
void close_all(int status, pthread_t *client_daemon);