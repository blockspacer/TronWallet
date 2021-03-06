// Generated by tuomap compiler.
#pragma once


namespace sogou_conf {


class conf_data
{
	static const int hash_value = 0xb2183a55;

public:		// data members
	int version;
	int original_data_size;
	bool compressed;
	tuomap::binary data;

private:
	friend class tuomap;

	static bool need_extra_space() { return true; }

	int calc_size() const
	{
		int len = 0;
		len += tuomap::serialize_helper::calc_size(data);
		return len;
	}

	void serialize(tuomap::serialize_context *context, int base_pos) const
	{
		context->serialize(data, base_pos + tuomap_offset(data));
	}
};


//-------------------------------------------------------

class conf_pack
{
	static const int hash_value = 0x2de9099a;

public:		// custom type definitions
	typedef tuomap::map<std::string, const char*, int, conf_data> m_str_to_conf_data;

public:		// data members
	m_str_to_conf_data conf;

private:
	friend class tuomap;

	static bool need_extra_space() { return true; }

	int calc_size() const
	{
		int len = 0;
		len += tuomap::serialize_helper::calc_size(conf);
		return len;
	}

	void serialize(tuomap::serialize_context *context, int base_pos) const
	{
		context->serialize(conf, base_pos + tuomap_offset(conf));
	}
};


}

