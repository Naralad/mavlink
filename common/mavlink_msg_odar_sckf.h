#pragma once
// MESSAGE ODAR_SCKF PACKING

#define MAVLINK_MSG_ID_ODAR_SCKF 235

MAVPACKED(
typedef struct __mavlink_odar_sckf_t {
 uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch)*/
 float qw; /*<  */
 float qx; /*<  */
 float qy; /*<  */
 float qz; /*<  */
 float vx; /*<  */
 float vy; /*<  */
 float vz; /*<  */
 float x; /*<  */
 float y; /*<  */
 float z; /*<  */
}) mavlink_odar_sckf_t;

#define MAVLINK_MSG_ID_ODAR_SCKF_LEN 48
#define MAVLINK_MSG_ID_ODAR_SCKF_MIN_LEN 48
#define MAVLINK_MSG_ID_235_LEN 48
#define MAVLINK_MSG_ID_235_MIN_LEN 48

#define MAVLINK_MSG_ID_ODAR_SCKF_CRC 144
#define MAVLINK_MSG_ID_235_CRC 144



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ODAR_SCKF { \
    235, \
    "ODAR_SCKF", \
    11, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_odar_sckf_t, time_usec) }, \
         { "qw", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_odar_sckf_t, qw) }, \
         { "qx", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_odar_sckf_t, qx) }, \
         { "qy", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_odar_sckf_t, qy) }, \
         { "qz", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_odar_sckf_t, qz) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_odar_sckf_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_odar_sckf_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_odar_sckf_t, vz) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_odar_sckf_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_odar_sckf_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_odar_sckf_t, z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ODAR_SCKF { \
    "ODAR_SCKF", \
    11, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_odar_sckf_t, time_usec) }, \
         { "qw", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_odar_sckf_t, qw) }, \
         { "qx", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_odar_sckf_t, qx) }, \
         { "qy", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_odar_sckf_t, qy) }, \
         { "qz", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_odar_sckf_t, qz) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_odar_sckf_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_odar_sckf_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_odar_sckf_t, vz) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_odar_sckf_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_odar_sckf_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_odar_sckf_t, z) }, \
         } \
}
#endif

/**
 * @brief Pack a odar_sckf message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param qw  
 * @param qx  
 * @param qy  
 * @param qz  
 * @param vx  
 * @param vy  
 * @param vz  
 * @param x  
 * @param y  
 * @param z  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_odar_sckf_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float qw, float qx, float qy, float qz, float vx, float vy, float vz, float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_SCKF_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, qw);
    _mav_put_float(buf, 12, qx);
    _mav_put_float(buf, 16, qy);
    _mav_put_float(buf, 20, qz);
    _mav_put_float(buf, 24, vx);
    _mav_put_float(buf, 28, vy);
    _mav_put_float(buf, 32, vz);
    _mav_put_float(buf, 36, x);
    _mav_put_float(buf, 40, y);
    _mav_put_float(buf, 44, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ODAR_SCKF_LEN);
#else
    mavlink_odar_sckf_t packet;
    packet.time_usec = time_usec;
    packet.qw = qw;
    packet.qx = qx;
    packet.qy = qy;
    packet.qz = qz;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.x = x;
    packet.y = y;
    packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ODAR_SCKF_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ODAR_SCKF;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ODAR_SCKF_MIN_LEN, MAVLINK_MSG_ID_ODAR_SCKF_LEN, MAVLINK_MSG_ID_ODAR_SCKF_CRC);
}

/**
 * @brief Pack a odar_sckf message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param qw  
 * @param qx  
 * @param qy  
 * @param qz  
 * @param vx  
 * @param vy  
 * @param vz  
 * @param x  
 * @param y  
 * @param z  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_odar_sckf_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float qw,float qx,float qy,float qz,float vx,float vy,float vz,float x,float y,float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_SCKF_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, qw);
    _mav_put_float(buf, 12, qx);
    _mav_put_float(buf, 16, qy);
    _mav_put_float(buf, 20, qz);
    _mav_put_float(buf, 24, vx);
    _mav_put_float(buf, 28, vy);
    _mav_put_float(buf, 32, vz);
    _mav_put_float(buf, 36, x);
    _mav_put_float(buf, 40, y);
    _mav_put_float(buf, 44, z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ODAR_SCKF_LEN);
#else
    mavlink_odar_sckf_t packet;
    packet.time_usec = time_usec;
    packet.qw = qw;
    packet.qx = qx;
    packet.qy = qy;
    packet.qz = qz;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.x = x;
    packet.y = y;
    packet.z = z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ODAR_SCKF_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ODAR_SCKF;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ODAR_SCKF_MIN_LEN, MAVLINK_MSG_ID_ODAR_SCKF_LEN, MAVLINK_MSG_ID_ODAR_SCKF_CRC);
}

/**
 * @brief Encode a odar_sckf struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param odar_sckf C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_odar_sckf_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_odar_sckf_t* odar_sckf)
{
    return mavlink_msg_odar_sckf_pack(system_id, component_id, msg, odar_sckf->time_usec, odar_sckf->qw, odar_sckf->qx, odar_sckf->qy, odar_sckf->qz, odar_sckf->vx, odar_sckf->vy, odar_sckf->vz, odar_sckf->x, odar_sckf->y, odar_sckf->z);
}

/**
 * @brief Encode a odar_sckf struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param odar_sckf C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_odar_sckf_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_odar_sckf_t* odar_sckf)
{
    return mavlink_msg_odar_sckf_pack_chan(system_id, component_id, chan, msg, odar_sckf->time_usec, odar_sckf->qw, odar_sckf->qx, odar_sckf->qy, odar_sckf->qz, odar_sckf->vx, odar_sckf->vy, odar_sckf->vz, odar_sckf->x, odar_sckf->y, odar_sckf->z);
}

/**
 * @brief Send a odar_sckf message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param qw  
 * @param qx  
 * @param qy  
 * @param qz  
 * @param vx  
 * @param vy  
 * @param vz  
 * @param x  
 * @param y  
 * @param z  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_odar_sckf_send(mavlink_channel_t chan, uint64_t time_usec, float qw, float qx, float qy, float qz, float vx, float vy, float vz, float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_SCKF_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, qw);
    _mav_put_float(buf, 12, qx);
    _mav_put_float(buf, 16, qy);
    _mav_put_float(buf, 20, qz);
    _mav_put_float(buf, 24, vx);
    _mav_put_float(buf, 28, vy);
    _mav_put_float(buf, 32, vz);
    _mav_put_float(buf, 36, x);
    _mav_put_float(buf, 40, y);
    _mav_put_float(buf, 44, z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_SCKF, buf, MAVLINK_MSG_ID_ODAR_SCKF_MIN_LEN, MAVLINK_MSG_ID_ODAR_SCKF_LEN, MAVLINK_MSG_ID_ODAR_SCKF_CRC);
#else
    mavlink_odar_sckf_t packet;
    packet.time_usec = time_usec;
    packet.qw = qw;
    packet.qx = qx;
    packet.qy = qy;
    packet.qz = qz;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.x = x;
    packet.y = y;
    packet.z = z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_SCKF, (const char *)&packet, MAVLINK_MSG_ID_ODAR_SCKF_MIN_LEN, MAVLINK_MSG_ID_ODAR_SCKF_LEN, MAVLINK_MSG_ID_ODAR_SCKF_CRC);
#endif
}

/**
 * @brief Send a odar_sckf message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_odar_sckf_send_struct(mavlink_channel_t chan, const mavlink_odar_sckf_t* odar_sckf)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_odar_sckf_send(chan, odar_sckf->time_usec, odar_sckf->qw, odar_sckf->qx, odar_sckf->qy, odar_sckf->qz, odar_sckf->vx, odar_sckf->vy, odar_sckf->vz, odar_sckf->x, odar_sckf->y, odar_sckf->z);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_SCKF, (const char *)odar_sckf, MAVLINK_MSG_ID_ODAR_SCKF_MIN_LEN, MAVLINK_MSG_ID_ODAR_SCKF_LEN, MAVLINK_MSG_ID_ODAR_SCKF_CRC);
#endif
}

#if MAVLINK_MSG_ID_ODAR_SCKF_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_odar_sckf_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float qw, float qx, float qy, float qz, float vx, float vy, float vz, float x, float y, float z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, qw);
    _mav_put_float(buf, 12, qx);
    _mav_put_float(buf, 16, qy);
    _mav_put_float(buf, 20, qz);
    _mav_put_float(buf, 24, vx);
    _mav_put_float(buf, 28, vy);
    _mav_put_float(buf, 32, vz);
    _mav_put_float(buf, 36, x);
    _mav_put_float(buf, 40, y);
    _mav_put_float(buf, 44, z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_SCKF, buf, MAVLINK_MSG_ID_ODAR_SCKF_MIN_LEN, MAVLINK_MSG_ID_ODAR_SCKF_LEN, MAVLINK_MSG_ID_ODAR_SCKF_CRC);
#else
    mavlink_odar_sckf_t *packet = (mavlink_odar_sckf_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->qw = qw;
    packet->qx = qx;
    packet->qy = qy;
    packet->qz = qz;
    packet->vx = vx;
    packet->vy = vy;
    packet->vz = vz;
    packet->x = x;
    packet->y = y;
    packet->z = z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_SCKF, (const char *)packet, MAVLINK_MSG_ID_ODAR_SCKF_MIN_LEN, MAVLINK_MSG_ID_ODAR_SCKF_LEN, MAVLINK_MSG_ID_ODAR_SCKF_CRC);
#endif
}
#endif

#endif

// MESSAGE ODAR_SCKF UNPACKING


/**
 * @brief Get field time_usec from odar_sckf message
 *
 * @return Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_odar_sckf_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field qw from odar_sckf message
 *
 * @return  
 */
static inline float mavlink_msg_odar_sckf_get_qw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field qx from odar_sckf message
 *
 * @return  
 */
static inline float mavlink_msg_odar_sckf_get_qx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field qy from odar_sckf message
 *
 * @return  
 */
static inline float mavlink_msg_odar_sckf_get_qy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field qz from odar_sckf message
 *
 * @return  
 */
static inline float mavlink_msg_odar_sckf_get_qz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field vx from odar_sckf message
 *
 * @return  
 */
static inline float mavlink_msg_odar_sckf_get_vx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field vy from odar_sckf message
 *
 * @return  
 */
static inline float mavlink_msg_odar_sckf_get_vy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field vz from odar_sckf message
 *
 * @return  
 */
static inline float mavlink_msg_odar_sckf_get_vz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field x from odar_sckf message
 *
 * @return  
 */
static inline float mavlink_msg_odar_sckf_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field y from odar_sckf message
 *
 * @return  
 */
static inline float mavlink_msg_odar_sckf_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field z from odar_sckf message
 *
 * @return  
 */
static inline float mavlink_msg_odar_sckf_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Decode a odar_sckf message into a struct
 *
 * @param msg The message to decode
 * @param odar_sckf C-struct to decode the message contents into
 */
static inline void mavlink_msg_odar_sckf_decode(const mavlink_message_t* msg, mavlink_odar_sckf_t* odar_sckf)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    odar_sckf->time_usec = mavlink_msg_odar_sckf_get_time_usec(msg);
    odar_sckf->qw = mavlink_msg_odar_sckf_get_qw(msg);
    odar_sckf->qx = mavlink_msg_odar_sckf_get_qx(msg);
    odar_sckf->qy = mavlink_msg_odar_sckf_get_qy(msg);
    odar_sckf->qz = mavlink_msg_odar_sckf_get_qz(msg);
    odar_sckf->vx = mavlink_msg_odar_sckf_get_vx(msg);
    odar_sckf->vy = mavlink_msg_odar_sckf_get_vy(msg);
    odar_sckf->vz = mavlink_msg_odar_sckf_get_vz(msg);
    odar_sckf->x = mavlink_msg_odar_sckf_get_x(msg);
    odar_sckf->y = mavlink_msg_odar_sckf_get_y(msg);
    odar_sckf->z = mavlink_msg_odar_sckf_get_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ODAR_SCKF_LEN? msg->len : MAVLINK_MSG_ID_ODAR_SCKF_LEN;
        memset(odar_sckf, 0, MAVLINK_MSG_ID_ODAR_SCKF_LEN);
    memcpy(odar_sckf, _MAV_PAYLOAD(msg), len);
#endif
}
