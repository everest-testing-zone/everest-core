// SPDX-License-Identifier: Apache-2.0
// Copyright Pionix GmbH and Contributors to EVerest

#include "ac_rcdImpl.hpp"

namespace module::rcd {

void ac_rcdImpl::init() {
}

void ac_rcdImpl::ready() {
}

void ac_rcdImpl::handle_self_test() {
    // your code for cmd self_test goes here
}

bool ac_rcdImpl::handle_reset() {
    // your code for cmd reset goes here
    return true;
}

} // namespace module::rcd