#pragma once
#include <string>

/**
 * \brief Serialization interface
 */
struct ISerializable
{
	virtual ~ISerializable() = default;
	virtual std::string serialize() = 0;
};