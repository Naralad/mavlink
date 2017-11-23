#pragma once
// MESSAGE ODAR_DESIRED_POSE PACKING

#define MAVLINK_MSG_ID_ODAR_DESIRED_POSE 225

MAVPACKED(
typedef struct __mavlink_odar_desired_pose_t {
 uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch)*/
 float x; /*<  */
 float y; /*<  */
 float z; /*<  */
 float qw; /*<  */
 float qx; /*<  */
 float qy; /*<  */
 float qz; /*<  */
}) mavlink_odar_desired_pose_t;

#define MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN 36
#define MAVLINK_MSG_ID_ODAR_DESIRED_POSE_MIN_LEN 36
#define MAVLINK_MSG_ID_225_LEN 36
#define MAVLINK_MSG_ID_225_MIN_LEN 36

#define MAVLINK_MSG_ID_ODAR_DESIRED_POSE_CRC 43
#define MAVLINK_MSG_ID_225_CRC 43



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ODAR_DESIRED_POSE { \
    225, \
    "ODAR_DESIRED_POSE", \
    8, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_odar_desired_pose_t, time_usec) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_odar_desired_pose_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_odar_desired_pose_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_odar_desired_pose_t, z) }, \
         { "qw", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_odar_desired_pose_t, qw) }, \
         { "qx", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_odar_desired_pose_t, qx) }, \
         { "qy", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_odar_desired_pose_t, qy) }, \
         { "qz", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_odar_desired_pose_t, qz) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ODAR_DESIRED_POSE { \
    "ODAR_DESIRED_POSE", \
    8, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_odar_desired_pose_t, time_usec) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_odar_desired_pose_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_odar_desired_pose_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_odar_desired_pose_t, z) }, \
         { "qw", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_odar_desired_pose_t, qw) }, \
         { "qx", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_odar_desired_pose_t, qx) }, \
         { "qy", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_odar_desired_pose_t, qy) }, \
         { "qz", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_odar_desired_pose_t, qz) }, \
         } \
}
#endif

/**
 * @brief Pack a odar_desired_pose message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param x  
 * @param y  
 * @param z  
 * @param qw  
 * @param qx  
 * @param qy  
 * @param qz  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_odar_desired_pose_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float x, float y, float z, float qw, float qx, float qy, float qz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, z);
    _mav_put_float(buf, 20, qw);
    _mav_put_float(buf, 24, qx);
    _mav_put_float(buf, 28, qy);
    _mav_put_float(buf, 32, qz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN);
#else
    mavlink_odar_desired_pose_t packet;
    packet.time_usec = time_usec;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.qw = qw;
    packet.qx = qx;
    packet.qy = qy;
    packet.qz = qz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ODAR_DESIRED_POSE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_MIN_LEN, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_CRC);
}

/**
 * @brief Pack a odar_desired_pose message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param x  
 * @param y  
 * @param z  
 * @param qw  
 * @param qx  
 * @param qy  
 * @param qz  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_odar_desired_pose_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float x,float y,float z,float qw,float qx,float qy,float qz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, z);
    _mav_put_float(buf, 20, qw);
    _mav_put_float(buf, 24, qx);
    _mav_put_float(buf, 28, qy);
    _mav_put_float(buf, 32, qz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN);
#else
    mavlink_odar_desired_pose_t packet;
    packet.time_usec = time_usec;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.qw = qw;
    packet.qx = qx;
    packet.qy = qy;
    packet.qz = qz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ODAR_DESIRED_POSE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_MIN_LEN, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_CRC);
}

/**
 * @brief Encode a odar_desired_pose struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param odar_desired_pose C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_odar_desired_pose_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_odar_desired_pose_t* odar_desired_pose)
{
    return mavlink_msg_odar_desired_pose_pack(system_id, component_id, msg, odar_desired_pose->time_usec, odar_desired_pose->x, odar_desired_pose->y, odar_desired_pose->z, odar_desired_pose->qw, odar_desired_pose->qx, odar_desired_pose->qy, odar_desired_pose->qz);
}

/**
 * @brief Encode a odar_desired_pose struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param odar_desired_pose C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_odar_desired_pose_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_odar_desired_pose_t* odar_desired_pose)
{
    return mavlink_msg_odar_desired_pose_pack_chan(system_id, component_id, chan, msg, odar_desired_pose->time_usec, odar_desired_pose->x, odar_desired_pose->y, odar_desired_pose->z, odar_desired_pose->qw, odar_desired_pose->qx, odar_desired_pose->qy, odar_desired_pose->qz);
}

/**
 * @brief Send a odar_desired_pose message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param x  
 * @param y  
 * @param z  
 * @param qw  
 * @param qx  
 * @param qy  
 * @param qz  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_odar_desired_pose_send(mavlink_channel_t chan, uint64_t time_usec, float x, float y, float z, float qw, float qx, float qy, float qz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, z);
    _mav_put_float(buf, 20, qw);
    _mav_put_float(buf, 24, qx);
    _mav_put_float(buf, 28, qy);
    _mav_put_float(buf, 32, qz);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_DESIRED_POSE, buf, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_MIN_LEN, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_CRC);
#else
    mavlink_odar_desired_pose_t packet;
    packet.time_usec = time_usec;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.qw = qw;
    packet.qx = qx;
    packet.qy = qy;
    packet.qz = qz;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_DESIRED_POSE, (const char *)&packet, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_MIN_LEN, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_CRC);
#endif
}

/**
 * @brief Send a odar_desired_pose message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_odar_desired_pose_send_struct(mavlink_channel_t chan, const mavlink_odar_desired_pose_t* odar_desired_pose)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_odar_desired_pose_send(chan, odar_desired_pose->time_usec, odar_desired_pose->x, odar_desired_pose->y, odar_desired_pose->z, odar_desired_pose->qw, odar_desired_pose->qx, odar_desired_pose->qy, odar_desired_pose->qz);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_DESIRED_POSE, (const char *)odar_desired_pose, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_MIN_LEN, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_CRC);
#endif
}

#if MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_odar_desired_pose_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float x, float y, float z, float qw, float qx, float qy, float qz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, x);
    _mav_put_float(buf, 12, y);
    _mav_put_float(buf, 16, z);
    _mav_put_float(buf, 20, qw);
    _mav_put_float(buf, 24, qx);
    _mav_put_float(buf, 28, qy);
    _mav_put_float(buf, 32, qz);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_DESIRED_POSE, buf, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_MIN_LEN, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_CRC);
#else
    mavlink_odar_desired_pose_t *packet = (mavlink_odar_desired_pose_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->qw = qw;
    packet->qx = qx;
    packet->qy = qy;
    packet->qz = qz;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_DESIRED_POSE, (const char *)packet, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_MIN_LEN, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_CRC);
#endif
}
#endif

#endif

// MESSAGE ODAR_DESIRED_POSE UNPACKING


/**
 * @brief Get field time_usec from odar_desired_pose message
 *
 * @return Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_odar_desired_pose_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field x from odar_desired_pose message
 *
 * @return  
 */
static inline float mavlink_msg_odar_desired_pose_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field y from odar_desired_pose message
 *
 * @return  
 */
static inline float mavlink_msg_odar_desired_pose_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field z from odar_desired_pose message
 *
 * @return  
 */
static inline float mavlink_msg_odar_desired_pose_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field qw from odar_desired_pose message
 *
 * @return  
 */
static inline float mavlink_msg_odar_desired_pose_get_qw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field qx from odar_desired_pose message
 *
 * @return  
 */
static inline float mavlink_msg_odar_desired_pose_get_qx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field qy from odar_desired_pose message
 *
 * @return  
 */
static inline float mavlink_msg_odar_desired_pose_get_qy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field qz from odar_desired_pose message
 *
 * @return  
 */
static inline float mavlink_msg_odar_desired_pose_get_qz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Decode a odar_desired_pose message into a struct
 *
 * @param msg The message to decode
 * @param odar_desired_pose C-struct to decode the message contents into
 */
static inline void mavlink_msg_odar_desired_pose_decode(const mavlink_message_t* msg, mavlink_odar_desired_pose_t* odar_desired_pose)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    odar_desired_pose->time_usec = mavlink_msg_odar_desired_pose_get_time_usec(msg);
    odar_desired_pose->x = mavlink_msg_odar_desired_pose_get_x(msg);
    odar_desired_pose->y = mavlink_msg_odar_desired_pose_get_y(msg);
    odar_desired_pose->z = mavlink_msg_odar_desired_pose_get_z(msg);
    odar_desired_pose->qw = mavlink_msg_odar_desired_pose_get_qw(msg);
    odar_desired_pose->qx = mavlink_msg_odar_desired_pose_get_qx(msg);
    odar_desired_pose->qy = mavlink_msg_odar_desired_pose_get_qy(msg);
    odar_desired_pose->qz = mavlink_msg_odar_desired_pose_get_qz(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN? msg->len : MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN;
        memset(odar_desired_pose, 0, MAVLINK_MSG_ID_ODAR_DESIRED_POSE_LEN);
    memcpy(odar_desired_pose, _MAV_PAYLOAD(msg), len);
#endif
}
