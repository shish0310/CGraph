/***************************
@Author: Chunel
@Contact: chunel@foxmail.com
@File: CObjectDefine.h
@Time: 2021/4/26 8:15 下午
@Desc:
***************************/

#ifndef CGRAPH_COBJECTDEFINE_H
#define CGRAPH_COBJECTDEFINE_H

#define CGRAPH_NAMESPACE_BEGIN                                          \
namespace CGraph {                                                      \

#define CGRAPH_NAMESPACE_END                                            \
} /* end of namespace CGraph */                                         \

/* 开启函数流程 */
#define CGRAPH_FUNCTION_BEGIN                                           \
    CStatus status;                                                     \

/* 结束函数流程 */
#define CGRAPH_FUNCTION_END                                             \
    return status;                                                      \

/* 无任何功能函数 */
#define CGRAPH_COMMON_FUNCTION                                          \
    return CStatus();                                                   \

/* 不支持当前功能 */
#define CGRAPH_NO_SUPPORT                                               \
    return CStatus("function not support");                             \

#endif //CGRAPH_COBJECTDEFINE_H
