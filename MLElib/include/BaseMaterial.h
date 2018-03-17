#ifndef BASEMATERIAL_H_
#define BASEMATERIAL_H_
#include <string>
#include <utility>
//-------------------------------------------------------------------------------------------------------
/// @author Renats Bikmajevs
/// Modified from : --
/// @note This is a virtual interface class for material operations.
/// @note Most of the functions are either virtual with no implementaion or pure virtual.
/// @note Some of the functions were influenced by the host, although they still are not implemented.
//-------------------------------------------------------------------------------------------------------
class BaseMaterial
{
public:
  //-----------------------------------------------------------------------------------------------------
  /// @brief Default constructor.
  //-----------------------------------------------------------------------------------------------------
  BaseMaterial()=default;
  //-----------------------------------------------------------------------------------------------------
  /// @brief Default copy constructor.
  //-----------------------------------------------------------------------------------------------------
  BaseMaterial(const BaseMaterial&) = default;
  //-----------------------------------------------------------------------------------------------------
  /// @brief Default copy assignment operator.
  //-----------------------------------------------------------------------------------------------------
  BaseMaterial& operator=(const BaseMaterial&) = default;
  //-----------------------------------------------------------------------------------------------------
  /// @brief Default move constructor.
  //-----------------------------------------------------------------------------------------------------
  BaseMaterial(BaseMaterial&&) = default;
  //-----------------------------------------------------------------------------------------------------
  /// @brief Default move assignment operator.
  //-----------------------------------------------------------------------------------------------------
  BaseMaterial& operator=(BaseMaterial&&) = default;
  //-----------------------------------------------------------------------------------------------------
  /// @brief Default virtual destructor.
  //-----------------------------------------------------------------------------------------------------
  virtual ~BaseMaterial()=default;
  //-----------------------------------------------------------------------------------------------------
  /// @brief (Host)Used to intialise a passed shader, subclasses must call this base function.
  //-----------------------------------------------------------------------------------------------------
  virtual void init()=0;
  //-----------------------------------------------------------------------------------------------------
  /// @brief (Host)Used to update shader values.
  //-----------------------------------------------------------------------------------------------------
  virtual void update()=0;
  //-----------------------------------------------------------------------------------------------------
  /// @brief (Host)Used to set this as the active shader, and pass the uniform values stored in this material.
  //-----------------------------------------------------------------------------------------------------
  virtual void apply();
  //-----------------------------------------------------------------------------------------------------
  /// @brief (Host)The file name of the json shader file that this material works with.
  //-----------------------------------------------------------------------------------------------------
  virtual const char* shaderFileName() const = 0;
  //-----------------------------------------------------------------------------------------------------
  /// @brief (Host)Sets the file name of the json shader file that this material works with.
  //-----------------------------------------------------------------------------------------------------
  virtual void setShaderName(const std::string &_name);
  //-----------------------------------------------------------------------------------------------------
  /// @brief Sets the name of this material object to the input value.
  //-----------------------------------------------------------------------------------------------------
  virtual void setName(std::string _new);
  //-----------------------------------------------------------------------------------------------------
  /// @brief Returns the currently stored name of this material object.
  //-----------------------------------------------------------------------------------------------------
  virtual std::string getName() const;
  //-----------------------------------------------------------------------------------------------------
  /// @brief Sets the ID of this material object to the input value.
  //-----------------------------------------------------------------------------------------------------
  virtual void setID(size_t _new);
  //-----------------------------------------------------------------------------------------------------
  /// @brief Returns the current ID stored in this material object.
  //-----------------------------------------------------------------------------------------------------
  virtual size_t getID() const;
protected:
  //-----------------------------------------------------------------------------------------------------
  /// @brief The ID of this material object.
  //-----------------------------------------------------------------------------------------------------
  size_t m_id=0;
  //-----------------------------------------------------------------------------------------------------
  /// @brief The name of this material object.
  //-----------------------------------------------------------------------------------------------------
  std::string m_name="";
};
#endif //BASEMATERIAL_H_
