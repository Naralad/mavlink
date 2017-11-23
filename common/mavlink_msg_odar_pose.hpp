// MESSAGE ODAR_POSE support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief ODAR_POSE message
 *
 *  ODAR Channel Command
 */
struct ODAR_POSE : mavlink::Message {
    static constexpr msgid_t MSG_ID = 223;
    static constexpr size_t LENGTH = 60;
    static constexpr size_t MIN_LENGTH = 60;
    static constexpr uint8_t CRC_EXTRA = 81;
    static constexpr auto NAME = "ODAR_POSE";


    uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch) */
    float x; /*<   */
    float y; /*<   */
    float z; /*<   */
    float vx; /*<   */
    float vy; /*<   */
    float vz; /*<   */
    float qw; /*<   */
    float qx; /*<   */
    float qy; /*<   */
    float qz; /*<   */
    float wx; /*<   */
    float wy; /*<   */
    float wz; /*<   */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  time_usec: " << time_usec << std::endl;
        ss << "  x: " << x << std::endl;
        ss << "  y: " << y << std::endl;
        ss << "  z: " << z << std::endl;
        ss << "  vx: " << vx << std::endl;
        ss << "  vy: " << vy << std::endl;
        ss << "  vz: " << vz << std::endl;
        ss << "  qw: " << qw << std::endl;
        ss << "  qx: " << qx << std::endl;
        ss << "  qy: " << qy << std::endl;
        ss << "  qz: " << qz << std::endl;
        ss << "  wx: " << wx << std::endl;
        ss << "  wy: " << wy << std::endl;
        ss << "  wz: " << wz << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << x;                             // offset: 8
        map << y;                             // offset: 12
        map << z;                             // offset: 16
        map << vx;                            // offset: 20
        map << vy;                            // offset: 24
        map << vz;                            // offset: 28
        map << qw;                            // offset: 32
        map << qx;                            // offset: 36
        map << qy;                            // offset: 40
        map << qz;                            // offset: 44
        map << wx;                            // offset: 48
        map << wy;                            // offset: 52
        map << wz;                            // offset: 56
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> x;                             // offset: 8
        map >> y;                             // offset: 12
        map >> z;                             // offset: 16
        map >> vx;                            // offset: 20
        map >> vy;                            // offset: 24
        map >> vz;                            // offset: 28
        map >> qw;                            // offset: 32
        map >> qx;                            // offset: 36
        map >> qy;                            // offset: 40
        map >> qz;                            // offset: 44
        map >> wx;                            // offset: 48
        map >> wy;                            // offset: 52
        map >> wz;                            // offset: 56
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
