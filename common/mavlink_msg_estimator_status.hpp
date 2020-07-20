// MESSAGE ESTIMATOR_STATUS support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief ESTIMATOR_STATUS message
 *
 * Estimator status message including flags, innovation test ratios and estimated accuracies. The flags message is an integer bitmask containing information on which EKF outputs are valid. See the ESTIMATOR_STATUS_FLAGS enum definition for further information. The innovaton test ratios show the magnitude of the sensor innovation divided by the innovation check threshold. Under normal operation the innovaton test ratios should be below 0.5 with occasional values up to 1.0. Values greater than 1.0 should be rare under normal operation and indicate that a measurement has been rejected by the filter. The user should be notified if an innovation test ratio greater than 1.0 is recorded. Notifications for values in the range between 0.5 and 1.0 should be optional and controllable by the user.
 */
struct ESTIMATOR_STATUS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 239;
    static constexpr size_t LENGTH = 48;
    static constexpr size_t MIN_LENGTH = 48;
    static constexpr uint8_t CRC_EXTRA = 222;
    static constexpr auto NAME = "ESTIMATOR_STATUS";


    uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch) */
    std::array<float, 10> state; /*< Estimator state */


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
        ss << "  state: [" << to_string(state) << "]" << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << state;                         // offset: 8
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> state;                         // offset: 8
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
