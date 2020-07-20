#pragma once
// MESSAGE ODAR_INFO PACKING

#define MAVLINK_MSG_ID_ODAR_INFO 238

MAVPACKED(
typedef struct __mavlink_odar_info_t {
 uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch)*/
 float gain_scale; /*<  */
 float k_p; /*<  */
 float k_d; /*<  */
 float k_i; /*<  */
 float k_r; /*<  */
 float k_w; /*<  */
 float k_ri; /*<  */
 uint8_t fuse_flag; /*<  */
 uint8_t feedback_flag; /*<  */
}) mavlink_odar_info_t;

#define MAVLINK_MSG_ID_ODAR_INFO_LEN 38
#define MAVLINK_MSG_ID_ODAR_INFO_MIN_LEN 38
#define MAVLINK_MSG_ID_238_LEN 38
#define MAVLINK_MSG_ID_238_MIN_LEN 38

#define MAVLINK_MSG_ID_ODAR_INFO_CRC 60
#define MAVLINK_MSG_ID_238_CRC 60



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ODAR_INFO { \
    238, \
    "ODAR_INFO", \
    10, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_odar_info_t, time_usec) }, \
         { "gain_scale", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_odar_info_t, gain_scale) }, \
         { "fuse_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_odar_info_t, fuse_flag) }, \
         { "feedback_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_odar_info_t, feedback_flag) }, \
         { "k_p", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_odar_info_t, k_p) }, \
         { "k_d", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_odar_info_t, k_d) }, \
         { "k_i", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_odar_info_t, k_i) }, \
         { "k_r", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_odar_info_t, k_r) }, \
         { "k_w", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_odar_info_t, k_w) }, \
         { "k_ri", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_odar_info_t, k_ri) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ODAR_INFO { \
    "ODAR_INFO", \
    10, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_odar_info_t, time_usec) }, \
         { "gain_scale", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_odar_info_t, gain_scale) }, \
         { "fuse_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_odar_info_t, fuse_flag) }, \
         { "feedback_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_odar_info_t, feedback_flag) }, \
         { "k_p", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_odar_info_t, k_p) }, \
         { "k_d", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_odar_info_t, k_d) }, \
         { "k_i", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_odar_info_t, k_i) }, \
         { "k_r", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_odar_info_t, k_r) }, \
         { "k_w", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_odar_info_t, k_w) }, \
         { "k_ri", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_odar_info_t, k_ri) }, \
         } \
}
#endif

/**
 * @brief Pack a odar_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param gain_scale  
 * @param fuse_flag  
 * @param feedback_flag  
 * @param k_p  
 * @param k_d  
 * @param k_i  
 * @param k_r  
 * @param k_w  
 * @param k_ri  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_odar_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, float gain_scale, uint8_t fuse_flag, uint8_t feedback_flag, float k_p, float k_d, float k_i, float k_r, float k_w, float k_ri)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_INFO_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, gain_scale);
    _mav_put_float(buf, 12, k_p);
    _mav_put_float(buf, 16, k_d);
    _mav_put_float(buf, 20, k_i);
    _mav_put_float(buf, 24, k_r);
    _mav_put_float(buf, 28, k_w);
    _mav_put_float(buf, 32, k_ri);
    _mav_put_uint8_t(buf, 36, fuse_flag);
    _mav_put_uint8_t(buf, 37, feedback_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ODAR_INFO_LEN);
#else
    mavlink_odar_info_t packet;
    packet.time_usec = time_usec;
    packet.gain_scale = gain_scale;
    packet.k_p = k_p;
    packet.k_d = k_d;
    packet.k_i = k_i;
    packet.k_r = k_r;
    packet.k_w = k_w;
    packet.k_ri = k_ri;
    packet.fuse_flag = fuse_flag;
    packet.feedback_flag = feedback_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ODAR_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ODAR_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ODAR_INFO_MIN_LEN, MAVLINK_MSG_ID_ODAR_INFO_LEN, MAVLINK_MSG_ID_ODAR_INFO_CRC);
}

/**
 * @brief Pack a odar_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param gain_scale  
 * @param fuse_flag  
 * @param feedback_flag  
 * @param k_p  
 * @param k_d  
 * @param k_i  
 * @param k_r  
 * @param k_w  
 * @param k_ri  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_odar_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,float gain_scale,uint8_t fuse_flag,uint8_t feedback_flag,float k_p,float k_d,float k_i,float k_r,float k_w,float k_ri)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_INFO_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, gain_scale);
    _mav_put_float(buf, 12, k_p);
    _mav_put_float(buf, 16, k_d);
    _mav_put_float(buf, 20, k_i);
    _mav_put_float(buf, 24, k_r);
    _mav_put_float(buf, 28, k_w);
    _mav_put_float(buf, 32, k_ri);
    _mav_put_uint8_t(buf, 36, fuse_flag);
    _mav_put_uint8_t(buf, 37, feedback_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ODAR_INFO_LEN);
#else
    mavlink_odar_info_t packet;
    packet.time_usec = time_usec;
    packet.gain_scale = gain_scale;
    packet.k_p = k_p;
    packet.k_d = k_d;
    packet.k_i = k_i;
    packet.k_r = k_r;
    packet.k_w = k_w;
    packet.k_ri = k_ri;
    packet.fuse_flag = fuse_flag;
    packet.feedback_flag = feedback_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ODAR_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ODAR_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ODAR_INFO_MIN_LEN, MAVLINK_MSG_ID_ODAR_INFO_LEN, MAVLINK_MSG_ID_ODAR_INFO_CRC);
}

/**
 * @brief Encode a odar_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param odar_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_odar_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_odar_info_t* odar_info)
{
    return mavlink_msg_odar_info_pack(system_id, component_id, msg, odar_info->time_usec, odar_info->gain_scale, odar_info->fuse_flag, odar_info->feedback_flag, odar_info->k_p, odar_info->k_d, odar_info->k_i, odar_info->k_r, odar_info->k_w, odar_info->k_ri);
}

/**
 * @brief Encode a odar_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param odar_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_odar_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_odar_info_t* odar_info)
{
    return mavlink_msg_odar_info_pack_chan(system_id, component_id, chan, msg, odar_info->time_usec, odar_info->gain_scale, odar_info->fuse_flag, odar_info->feedback_flag, odar_info->k_p, odar_info->k_d, odar_info->k_i, odar_info->k_r, odar_info->k_w, odar_info->k_ri);
}

/**
 * @brief Send a odar_info message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (micros since boot or Unix epoch)
 * @param gain_scale  
 * @param fuse_flag  
 * @param feedback_flag  
 * @param k_p  
 * @param k_d  
 * @param k_i  
 * @param k_r  
 * @param k_w  
 * @param k_ri  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_odar_info_send(mavlink_channel_t chan, uint64_t time_usec, float gain_scale, uint8_t fuse_flag, uint8_t feedback_flag, float k_p, float k_d, float k_i, float k_r, float k_w, float k_ri)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ODAR_INFO_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, gain_scale);
    _mav_put_float(buf, 12, k_p);
    _mav_put_float(buf, 16, k_d);
    _mav_put_float(buf, 20, k_i);
    _mav_put_float(buf, 24, k_r);
    _mav_put_float(buf, 28, k_w);
    _mav_put_float(buf, 32, k_ri);
    _mav_put_uint8_t(buf, 36, fuse_flag);
    _mav_put_uint8_t(buf, 37, feedback_flag);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_INFO, buf, MAVLINK_MSG_ID_ODAR_INFO_MIN_LEN, MAVLINK_MSG_ID_ODAR_INFO_LEN, MAVLINK_MSG_ID_ODAR_INFO_CRC);
#else
    mavlink_odar_info_t packet;
    packet.time_usec = time_usec;
    packet.gain_scale = gain_scale;
    packet.k_p = k_p;
    packet.k_d = k_d;
    packet.k_i = k_i;
    packet.k_r = k_r;
    packet.k_w = k_w;
    packet.k_ri = k_ri;
    packet.fuse_flag = fuse_flag;
    packet.feedback_flag = feedback_flag;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_INFO, (const char *)&packet, MAVLINK_MSG_ID_ODAR_INFO_MIN_LEN, MAVLINK_MSG_ID_ODAR_INFO_LEN, MAVLINK_MSG_ID_ODAR_INFO_CRC);
#endif
}

/**
 * @brief Send a odar_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_odar_info_send_struct(mavlink_channel_t chan, const mavlink_odar_info_t* odar_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_odar_info_send(chan, odar_info->time_usec, odar_info->gain_scale, odar_info->fuse_flag, odar_info->feedback_flag, odar_info->k_p, odar_info->k_d, odar_info->k_i, odar_info->k_r, odar_info->k_w, odar_info->k_ri);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_INFO, (const char *)odar_info, MAVLINK_MSG_ID_ODAR_INFO_MIN_LEN, MAVLINK_MSG_ID_ODAR_INFO_LEN, MAVLINK_MSG_ID_ODAR_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_ODAR_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_odar_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, float gain_scale, uint8_t fuse_flag, uint8_t feedback_flag, float k_p, float k_d, float k_i, float k_r, float k_w, float k_ri)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, gain_scale);
    _mav_put_float(buf, 12, k_p);
    _mav_put_float(buf, 16, k_d);
    _mav_put_float(buf, 20, k_i);
    _mav_put_float(buf, 24, k_r);
    _mav_put_float(buf, 28, k_w);
    _mav_put_float(buf, 32, k_ri);
    _mav_put_uint8_t(buf, 36, fuse_flag);
    _mav_put_uint8_t(buf, 37, feedback_flag);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_INFO, buf, MAVLINK_MSG_ID_ODAR_INFO_MIN_LEN, MAVLINK_MSG_ID_ODAR_INFO_LEN, MAVLINK_MSG_ID_ODAR_INFO_CRC);
#else
    mavlink_odar_info_t *packet = (mavlink_odar_info_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->gain_scale = gain_scale;
    packet->k_p = k_p;
    packet->k_d = k_d;
    packet->k_i = k_i;
    packet->k_r = k_r;
    packet->k_w = k_w;
    packet->k_ri = k_ri;
    packet->fuse_flag = fuse_flag;
    packet->feedback_flag = feedback_flag;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ODAR_INFO, (const char *)packet, MAVLINK_MSG_ID_ODAR_INFO_MIN_LEN, MAVLINK_MSG_ID_ODAR_INFO_LEN, MAVLINK_MSG_ID_ODAR_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE ODAR_INFO UNPACKING


/**
 * @brief Get field time_usec from odar_info message
 *
 * @return Timestamp (micros since boot or Unix epoch)
 */
static inline uint64_t mavlink_msg_odar_info_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field gain_scale from odar_info message
 *
 * @return  
 */
static inline float mavlink_msg_odar_info_get_gain_scale(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field fuse_flag from odar_info message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_odar_info_get_fuse_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field feedback_flag from odar_info message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_odar_info_get_feedback_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  37);
}

/**
 * @brief Get field k_p from odar_info message
 *
 * @return  
 */
static inline float mavlink_msg_odar_info_get_k_p(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field k_d from odar_info message
 *
 * @return  
 */
static inline float mavlink_msg_odar_info_get_k_d(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field k_i from odar_info message
 *
 * @return  
 */
static inline float mavlink_msg_odar_info_get_k_i(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field k_r from odar_info message
 *
 * @return  
 */
static inline float mavlink_msg_odar_info_get_k_r(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field k_w from odar_info message
 *
 * @return  
 */
static inline float mavlink_msg_odar_info_get_k_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field k_ri from odar_info message
 *
 * @return  
 */
static inline float mavlink_msg_odar_info_get_k_ri(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Decode a odar_info message into a struct
 *
 * @param msg The message to decode
 * @param odar_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_odar_info_decode(const mavlink_message_t* msg, mavlink_odar_info_t* odar_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    odar_info->time_usec = mavlink_msg_odar_info_get_time_usec(msg);
    odar_info->gain_scale = mavlink_msg_odar_info_get_gain_scale(msg);
    odar_info->k_p = mavlink_msg_odar_info_get_k_p(msg);
    odar_info->k_d = mavlink_msg_odar_info_get_k_d(msg);
    odar_info->k_i = mavlink_msg_odar_info_get_k_i(msg);
    odar_info->k_r = mavlink_msg_odar_info_get_k_r(msg);
    odar_info->k_w = mavlink_msg_odar_info_get_k_w(msg);
    odar_info->k_ri = mavlink_msg_odar_info_get_k_ri(msg);
    odar_info->fuse_flag = mavlink_msg_odar_info_get_fuse_flag(msg);
    odar_info->feedback_flag = mavlink_msg_odar_info_get_feedback_flag(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ODAR_INFO_LEN? msg->len : MAVLINK_MSG_ID_ODAR_INFO_LEN;
        memset(odar_info, 0, MAVLINK_MSG_ID_ODAR_INFO_LEN);
    memcpy(odar_info, _MAV_PAYLOAD(msg), len);
#endif
}
