#pragma once
// MESSAGE ODAR_CHANNEL_COMMAND PACKING

#define MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND 224

MAVPACKED(
typedef struct __mavlink_odar_channel_command_t {
 uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch)*/
 uint32_t channel; /*<  */
 float float_value; /*<  */
 int32_t int_value; /*<  */
}) mavlink_odar_channel_command_t;

#define MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN 20
#define MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_MIN_LEN 20
#define MAVLINK_MSG_ID_224_LEN 20
#define MAVLINK_MSG_ID_224_MIN_LEN 20

#define MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_CRC 184
#define MAVLINK_MSG_ID_224_CRC 184



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ODAR_CHANNEL_COMMAND { \
    224, \
    "ODAR_CHANNEL_COMMAND", \
    4, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_odar_channel_command_t, time_usec) }, \
         { "channel", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_odar_channel_command_t, channel) }, \
         { "float_value", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_odar_channel_command_t, float_value) }, \
         { "int_value", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_odar_channel_command_t, int_value) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ODAR_CHANNEL_COMMAND { \
    "ODAR_CHANNEL_COMMAND", \
    4, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_odar_channel_command_t, time_usec) }, \
         { "channel", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_odar_channel_command_t, channel) }, \
         { "float_value", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_odar_channel_command_t, float_value) }, \
         { "int_value", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_odar_channel_command_t, int_value) }, \
         } \
}
#endif

/**
 * @brief Pack a odar_channel_command message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param channel  
 * @param float_value  
 * @param int_value  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_odar_channel_command_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint32_t channel, float float_value, int32_t int_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, channel);
    _mav_put_float(buf, 12, float_value);
    _mav_put_int32_t(buf, 16, int_value);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN);
#else
    mavlink_odar_channel_command_t packet;
    packet.time_usec = time_usec;
    packet.channel = channel;
    packet.float_value = float_value;
    packet.int_value = int_value;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_MIN_LEN, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_CRC);
}

/**
 * @brief Pack a odar_channel_command message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param channel  
 * @param float_value  
 * @param int_value  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_odar_channel_command_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint32_t channel,float float_value,int32_t int_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, channel);
    _mav_put_float(buf, 12, float_value);
    _mav_put_int32_t(buf, 16, int_value);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN);
#else
    mavlink_odar_channel_command_t packet;
    packet.time_usec = time_usec;
    packet.channel = channel;
    packet.float_value = float_value;
    packet.int_value = int_value;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_MIN_LEN, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_CRC);
}

/**
 * @brief Encode a odar_channel_command struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param odar_channel_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_odar_channel_command_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_odar_channel_command_t* odar_channel_command)
{
    return mavlink_msg_odar_channel_command_pack(system_id, component_id, msg, odar_channel_command->time_usec, odar_channel_command->channel, odar_channel_command->float_value, odar_channel_command->int_value);
}

/**
 * @brief Encode a odar_channel_command struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param odar_channel_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_odar_channel_command_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_odar_channel_command_t* odar_channel_command)
{
    return mavlink_msg_odar_channel_command_pack_chan(system_id, component_id, chan, msg, odar_channel_command->time_usec, odar_channel_command->channel, odar_channel_command->float_value, odar_channel_command->int_value);
}

/**
 * @brief Send a odar_channel_command message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param channel  
 * @param float_value  
 * @param int_value  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_odar_channel_command_send(mavlink_channel_t chan, uint64_t time_usec, uint32_t channel, float float_value, int32_t int_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, channel);
    _mav_put_float(buf, 12, float_value);
    _mav_put_int32_t(buf, 16, int_value);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND, buf, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_MIN_LEN, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_CRC);
#else
    mavlink_odar_channel_command_t packet;
    packet.time_usec = time_usec;
    packet.channel = channel;
    packet.float_value = float_value;
    packet.int_value = int_value;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND, (const char *)&packet, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_MIN_LEN, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_CRC);
#endif
}

/**
 * @brief Send a odar_channel_command message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_odar_channel_command_send_struct(mavlink_channel_t chan, const mavlink_odar_channel_command_t* odar_channel_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_odar_channel_command_send(chan, odar_channel_command->time_usec, odar_channel_command->channel, odar_channel_command->float_value, odar_channel_command->int_value);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND, (const char *)odar_channel_command, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_MIN_LEN, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_CRC);
#endif
}

#if MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_odar_channel_command_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint32_t channel, float float_value, int32_t int_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, channel);
    _mav_put_float(buf, 12, float_value);
    _mav_put_int32_t(buf, 16, int_value);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND, buf, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_MIN_LEN, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_CRC);
#else
    mavlink_odar_channel_command_t *packet = (mavlink_odar_channel_command_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->channel = channel;
    packet->float_value = float_value;
    packet->int_value = int_value;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND, (const char *)packet, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_MIN_LEN, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_CRC);
#endif
}
#endif

#endif

// MESSAGE ODAR_CHANNEL_COMMAND UNPACKING


/**
 * @brief Get field time_usec from odar_channel_command message
 *
 * @return Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_odar_channel_command_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field channel from odar_channel_command message
 *
 * @return  
 */
static inline uint32_t mavlink_msg_odar_channel_command_get_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field float_value from odar_channel_command message
 *
 * @return  
 */
static inline float mavlink_msg_odar_channel_command_get_float_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field int_value from odar_channel_command message
 *
 * @return  
 */
static inline int32_t mavlink_msg_odar_channel_command_get_int_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Decode a odar_channel_command message into a struct
 *
 * @param msg The message to decode
 * @param odar_channel_command C-struct to decode the message contents into
 */
static inline void mavlink_msg_odar_channel_command_decode(const mavlink_message_t* msg, mavlink_odar_channel_command_t* odar_channel_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    odar_channel_command->time_usec = mavlink_msg_odar_channel_command_get_time_usec(msg);
    odar_channel_command->channel = mavlink_msg_odar_channel_command_get_channel(msg);
    odar_channel_command->float_value = mavlink_msg_odar_channel_command_get_float_value(msg);
    odar_channel_command->int_value = mavlink_msg_odar_channel_command_get_int_value(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN? msg->len : MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN;
        memset(odar_channel_command, 0, MAVLINK_MSG_ID_ODAR_CHANNEL_COMMAND_LEN);
    memcpy(odar_channel_command, _MAV_PAYLOAD(msg), len);
#endif
}
