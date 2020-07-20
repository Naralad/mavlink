#pragma once
// MESSAGE ESTIMATOR_STATUS PACKING

#define MAVLINK_MSG_ID_ESTIMATOR_STATUS 239

MAVPACKED(
typedef struct __mavlink_estimator_status_t {
 uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch)*/
 float state[10]; /*< Estimator state*/
}) mavlink_estimator_status_t;

#define MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN 48
#define MAVLINK_MSG_ID_ESTIMATOR_STATUS_MIN_LEN 48
#define MAVLINK_MSG_ID_239_LEN 48
#define MAVLINK_MSG_ID_239_MIN_LEN 48

#define MAVLINK_MSG_ID_ESTIMATOR_STATUS_CRC 222
#define MAVLINK_MSG_ID_239_CRC 222

#define MAVLINK_MSG_ESTIMATOR_STATUS_FIELD_STATE_LEN 10

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ESTIMATOR_STATUS { \
    239, \
    "ESTIMATOR_STATUS", \
    2, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_estimator_status_t, time_usec) }, \
         { "state", NULL, MAVLINK_TYPE_FLOAT, 10, 8, offsetof(mavlink_estimator_status_t, state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ESTIMATOR_STATUS { \
    "ESTIMATOR_STATUS", \
    2, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_estimator_status_t, time_usec) }, \
         { "state", NULL, MAVLINK_TYPE_FLOAT, 10, 8, offsetof(mavlink_estimator_status_t, state) }, \
         } \
}
#endif

/**
 * @brief Pack a estimator_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param state Estimator state
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_estimator_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, const float *state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float_array(buf, 8, state, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN);
#else
    mavlink_estimator_status_t packet;
    packet.time_usec = time_usec;
    mav_array_memcpy(packet.state, state, sizeof(float)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ESTIMATOR_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ESTIMATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_CRC);
}

/**
 * @brief Pack a estimator_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param state Estimator state
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_estimator_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,const float *state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float_array(buf, 8, state, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN);
#else
    mavlink_estimator_status_t packet;
    packet.time_usec = time_usec;
    mav_array_memcpy(packet.state, state, sizeof(float)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ESTIMATOR_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ESTIMATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_CRC);
}

/**
 * @brief Encode a estimator_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param estimator_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_estimator_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_estimator_status_t* estimator_status)
{
    return mavlink_msg_estimator_status_pack(system_id, component_id, msg, estimator_status->time_usec, estimator_status->state);
}

/**
 * @brief Encode a estimator_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param estimator_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_estimator_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_estimator_status_t* estimator_status)
{
    return mavlink_msg_estimator_status_pack_chan(system_id, component_id, chan, msg, estimator_status->time_usec, estimator_status->state);
}

/**
 * @brief Send a estimator_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param state Estimator state
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_estimator_status_send(mavlink_channel_t chan, uint64_t time_usec, const float *state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float_array(buf, 8, state, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESTIMATOR_STATUS, buf, MAVLINK_MSG_ID_ESTIMATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_CRC);
#else
    mavlink_estimator_status_t packet;
    packet.time_usec = time_usec;
    mav_array_memcpy(packet.state, state, sizeof(float)*10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESTIMATOR_STATUS, (const char *)&packet, MAVLINK_MSG_ID_ESTIMATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_CRC);
#endif
}

/**
 * @brief Send a estimator_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_estimator_status_send_struct(mavlink_channel_t chan, const mavlink_estimator_status_t* estimator_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_estimator_status_send(chan, estimator_status->time_usec, estimator_status->state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESTIMATOR_STATUS, (const char *)estimator_status, MAVLINK_MSG_ID_ESTIMATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_estimator_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, const float *state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float_array(buf, 8, state, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESTIMATOR_STATUS, buf, MAVLINK_MSG_ID_ESTIMATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_CRC);
#else
    mavlink_estimator_status_t *packet = (mavlink_estimator_status_t *)msgbuf;
    packet->time_usec = time_usec;
    mav_array_memcpy(packet->state, state, sizeof(float)*10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESTIMATOR_STATUS, (const char *)packet, MAVLINK_MSG_ID_ESTIMATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE ESTIMATOR_STATUS UNPACKING


/**
 * @brief Get field time_usec from estimator_status message
 *
 * @return Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_estimator_status_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field state from estimator_status message
 *
 * @return Estimator state
 */
static inline uint16_t mavlink_msg_estimator_status_get_state(const mavlink_message_t* msg, float *state)
{
    return _MAV_RETURN_float_array(msg, state, 10,  8);
}

/**
 * @brief Decode a estimator_status message into a struct
 *
 * @param msg The message to decode
 * @param estimator_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_estimator_status_decode(const mavlink_message_t* msg, mavlink_estimator_status_t* estimator_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    estimator_status->time_usec = mavlink_msg_estimator_status_get_time_usec(msg);
    mavlink_msg_estimator_status_get_state(msg, estimator_status->state);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN? msg->len : MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN;
        memset(estimator_status, 0, MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN);
    memcpy(estimator_status, _MAV_PAYLOAD(msg), len);
#endif
}
