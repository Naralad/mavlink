// MESSAGE ODAR_FUSED_POSE support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief ODAR_FUSED_POSE message
 *
 *  ODAR Fused Pose 
 */
struct ODAR_FUSED_POSE : mavlink::Message {
    static constexpr msgid_t MSG_ID = 236;
    static constexpr size_t LENGTH = 36;
    static constexpr size_t MIN_LENGTH = 36;
    static constexpr uint8_t CRC_EXTRA = 135;
    static constexpr auto NAME = "ODAR_FUSED_POSE";


    uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch) */
    float x; /*<   */
    float y; /*<   */
    float z; /*<   */
    float qw; /*<   */
    float qx; /*<   */
    float qy; /*<   */
    float qz; /*<   */


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
        ss << "  qw: " << qw << std::endl;
        ss << "  qx: " << qx << std::endl;
        ss << "  qy: " << qy << std::endl;
        ss << "  qz: " << qz << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << x;                             // offset: 8
        map << y;                             // offset: 12
        map << z;                             // offset: 16
        map << qw;                            // offset: 20
        map << qx;                            // offset: 24
        map << qy;                            // offset: 28
        map << qz;                            // offset: 32
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> x;                             // offset: 8
        map >> y;                             // offset: 12
        map >> z;                             // offset: 16
        map >> qw;                            // offset: 20
        map >> qx;                            // offset: 24
        map >> qy;                            // offset: 28
        map >> qz;                            // offset: 32
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
