// MESSAGE ODAR_SCKF support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief ODAR_SCKF message
 *
 *  ODAR SCKF 
 */
struct ODAR_SCKF : mavlink::Message {
    static constexpr msgid_t MSG_ID = 235;
    static constexpr size_t LENGTH = 48;
    static constexpr size_t MIN_LENGTH = 48;
    static constexpr uint8_t CRC_EXTRA = 144;
    static constexpr auto NAME = "ODAR_SCKF";


    uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch) */
    float qw; /*<   */
    float qx; /*<   */
    float qy; /*<   */
    float qz; /*<   */
    float vx; /*<   */
    float vy; /*<   */
    float vz; /*<   */
    float x; /*<   */
    float y; /*<   */
    float z; /*<   */


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
        ss << "  qw: " << qw << std::endl;
        ss << "  qx: " << qx << std::endl;
        ss << "  qy: " << qy << std::endl;
        ss << "  qz: " << qz << std::endl;
        ss << "  vx: " << vx << std::endl;
        ss << "  vy: " << vy << std::endl;
        ss << "  vz: " << vz << std::endl;
        ss << "  x: " << x << std::endl;
        ss << "  y: " << y << std::endl;
        ss << "  z: " << z << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << qw;                            // offset: 8
        map << qx;                            // offset: 12
        map << qy;                            // offset: 16
        map << qz;                            // offset: 20
        map << vx;                            // offset: 24
        map << vy;                            // offset: 28
        map << vz;                            // offset: 32
        map << x;                             // offset: 36
        map << y;                             // offset: 40
        map << z;                             // offset: 44
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> qw;                            // offset: 8
        map >> qx;                            // offset: 12
        map >> qy;                            // offset: 16
        map >> qz;                            // offset: 20
        map >> vx;                            // offset: 24
        map >> vy;                            // offset: 28
        map >> vz;                            // offset: 32
        map >> x;                             // offset: 36
        map >> y;                             // offset: 40
        map >> z;                             // offset: 44
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
