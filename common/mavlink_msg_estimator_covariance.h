#pragma once
// MESSAGE ESTIMATOR_COVARIANCE PACKING

#define MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE 240

MAVPACKED(
typedef struct __mavlink_estimator_covariance_t {
 uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch)*/
 float cov[45]; /*< Estimator covariance upper triangle*/
}) mavlink_estimator_covariance_t;

#define MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN 188
#define MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_MIN_LEN 188
#define MAVLINK_MSG_ID_240_LEN 188
#define MAVLINK_MSG_ID_240_MIN_LEN 188

#define MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_CRC 248
#define MAVLINK_MSG_ID_240_CRC 248

#define MAVLINK_MSG_ESTIMATOR_COVARIANCE_FIELD_COV_LEN 45

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ESTIMATOR_COVARIANCE { \
    240, \
    "ESTIMATOR_COVARIANCE", \
    2, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_estimator_covariance_t, time_usec) }, \
         { "cov", NULL, MAVLINK_TYPE_FLOAT, 45, 8, offsetof(mavlink_estimator_covariance_t, cov) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ESTIMATOR_COVARIANCE { \
    "ESTIMATOR_COVARIANCE", \
    2, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_estimator_covariance_t, time_usec) }, \
         { "cov", NULL, MAVLINK_TYPE_FLOAT, 45, 8, offsetof(mavlink_estimator_covariance_t, cov) }, \
         } \
}
#endif

/**
 * @brief Pack a estimator_covariance message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param cov Estimator covariance upper triangle
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_estimator_covariance_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, const float *cov)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float_array(buf, 8, cov, 45);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN);
#else
    mavlink_estimator_covariance_t packet;
    packet.time_usec = time_usec;
    mav_array_memcpy(packet.cov, cov, sizeof(float)*45);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_CRC);
}

/**
 * @brief Pack a estimator_covariance message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param cov Estimator covariance upper triangle
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_estimator_covariance_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,const float *cov)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float_array(buf, 8, cov, 45);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN);
#else
    mavlink_estimator_covariance_t packet;
    packet.time_usec = time_usec;
    mav_array_memcpy(packet.cov, cov, sizeof(float)*45);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_CRC);
}

/**
 * @brief Encode a estimator_covariance struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param estimator_covariance C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_estimator_covariance_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_estimator_covariance_t* estimator_covariance)
{
    return mavlink_msg_estimator_covariance_pack(system_id, component_id, msg, estimator_covariance->time_usec, estimator_covariance->cov);
}

/**
 * @brief Encode a estimator_covariance struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param estimator_covariance C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_estimator_covariance_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_estimator_covariance_t* estimator_covariance)
{
    return mavlink_msg_estimator_covariance_pack_chan(system_id, component_id, chan, msg, estimator_covariance->time_usec, estimator_covariance->cov);
}

/**
 * @brief Send a estimator_covariance message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param cov Estimator covariance upper triangle
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_estimator_covariance_send(mavlink_channel_t chan, uint64_t time_usec, const float *cov)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float_array(buf, 8, cov, 45);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE, buf, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_CRC);
#else
    mavlink_estimator_covariance_t packet;
    packet.time_usec = time_usec;
    mav_array_memcpy(packet.cov, cov, sizeof(float)*45);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE, (const char *)&packet, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_CRC);
#endif
}

/**
 * @brief Send a estimator_covariance message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_estimator_covariance_send_struct(mavlink_channel_t chan, const mavlink_estimator_covariance_t* estimator_covariance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_estimator_covariance_send(chan, estimator_covariance->time_usec, estimator_covariance->cov);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE, (const char *)estimator_covariance, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_CRC);
#endif
}

#if MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_estimator_covariance_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, const float *cov)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float_array(buf, 8, cov, 45);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE, buf, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_CRC);
#else
    mavlink_estimator_covariance_t *packet = (mavlink_estimator_covariance_t *)msgbuf;
    packet->time_usec = time_usec;
    mav_array_memcpy(packet->cov, cov, sizeof(float)*45);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE, (const char *)packet, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_CRC);
#endif
}
#endif

#endif

// MESSAGE ESTIMATOR_COVARIANCE UNPACKING


/**
 * @brief Get field time_usec from estimator_covariance message
 *
 * @return Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_estimator_covariance_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field cov from estimator_covariance message
 *
 * @return Estimator covariance upper triangle
 */
static inline uint16_t mavlink_msg_estimator_covariance_get_cov(const mavlink_message_t* msg, float *cov)
{
    return _MAV_RETURN_float_array(msg, cov, 45,  8);
}

/**
 * @brief Decode a estimator_covariance message into a struct
 *
 * @param msg The message to decode
 * @param estimator_covariance C-struct to decode the message contents into
 */
static inline void mavlink_msg_estimator_covariance_decode(const mavlink_message_t* msg, mavlink_estimator_covariance_t* estimator_covariance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    estimator_covariance->time_usec = mavlink_msg_estimator_covariance_get_time_usec(msg);
    mavlink_msg_estimator_covariance_get_cov(msg, estimator_covariance->cov);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN? msg->len : MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN;
        memset(estimator_covariance, 0, MAVLINK_MSG_ID_ESTIMATOR_COVARIANCE_LEN);
    memcpy(estimator_covariance, _MAV_PAYLOAD(msg), len);
#endif
}
