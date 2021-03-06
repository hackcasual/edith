#ifndef _ENTITY_H
#define _ENTITY_H

#include <memory>
#include <vector>
#include <stdint.h>

class Bitstream;
class Class;
class FlatSendTable;
class Property;

class Entity {
public:
  Entity();
  Entity(uint32_t id, const Class &clazz, const FlatSendTable &table);

  void update(Bitstream &stream);

  friend void swap(Entity &first, Entity &second);

  uint32_t id;
  const Class *clazz;
  const FlatSendTable *table;
  std::vector<std::shared_ptr<Property>> properties;
};

#endif

