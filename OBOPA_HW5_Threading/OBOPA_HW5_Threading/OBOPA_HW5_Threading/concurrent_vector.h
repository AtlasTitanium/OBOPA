#pragma once

template <typename T>
class Concurrent_vector {
private:
	std::vector<T> vect;
	std::mutex mutex;
public:
	void insert(T input) {
		mutex.lock();
		vect.push_back(input);
		mutex.unlock();
	}
	
	T& getPos(size_t index) {
		std::lock_guard<std::mutex> guard(mutex);
		if (index >= 0 && index < vect.size())
			return vect[index];
	}
};

