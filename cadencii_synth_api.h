#pragma once

#include <memory>
#include <stdint.h>

namespace cadencii {
namespace singing {

typedef int64_t tick_t;

}
}

#include "./ISingingSynthesizer.hpp"
#include "./IScoreProvider.hpp"
#include "./IScoreEvent.hpp"
#include "./Automation.hpp"
#include "./AutomationEvent.hpp"
#include "./NoteEvent.hpp"
#include "./TempoEvent.hpp"
