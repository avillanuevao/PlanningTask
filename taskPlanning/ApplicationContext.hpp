#pragma once

#include <memory>

#include <view/ViewVisualizationContext.hpp>
#include <view/ViewOperationContext.hpp>

class ApplicationContext
{
public:
    ApplicationContext();

    std::shared_ptr<view::ViewVisualizationContext> getViewVisualizationContext() const;

    std::shared_ptr<view::ViewOperationContext> getViewOperationContext() const;

private:
    std::shared_ptr<view::ViewVisualizationContext> mViewVisualizationContext;
    std::shared_ptr<view::ViewOperationContext> mViewOperationContext;

};
