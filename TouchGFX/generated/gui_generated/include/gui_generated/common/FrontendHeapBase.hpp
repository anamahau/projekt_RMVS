/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDHEAPBASE_HPP
#define FRONTENDHEAPBASE_HPP

#include <common/Meta.hpp>
#include <common/Partition.hpp>
#include <mvp/MVPHeap.hpp>

#include <touchgfx/transitions/NoTransition.hpp>
#include <touchgfx/transitions/CoverTransition.hpp>
#include <touchgfx/transitions/BlockTransition.hpp>

#include <gui/common/FrontendApplication.hpp>
#include <gui/model/Model.hpp>

#include <gui/seznam_screen/SeznamView.hpp>
#include <gui/seznam_screen/SeznamPresenter.hpp>
#include <gui/labirint_naslovnica_screen/Labirint_naslovnicaView.hpp>
#include <gui/labirint_naslovnica_screen/Labirint_naslovnicaPresenter.hpp>
#include <gui/kaca_naslovnica_screen/Kaca_naslovnicaView.hpp>
#include <gui/kaca_naslovnica_screen/Kaca_naslovnicaPresenter.hpp>
#include <gui/labirint_screen/LabirintView.hpp>
#include <gui/labirint_screen/LabirintPresenter.hpp>
#include <gui/kaca_screen/KacaView.hpp>
#include <gui/kaca_screen/KacaPresenter.hpp>


/**
 * This class provides the memory that shall be used for memory allocations
 * in the frontend. A single instance of the FrontendHeap is allocated once (in heap
 * memory), and all other frontend objects such as views, presenters and data model are
 * allocated within the scope of this FrontendHeap. As such, the RAM usage of the entire
 * user interface is sizeof(FrontendHeap).
 *
 * @note The FrontendHeap reserves memory for the most memory-consuming presenter and
 * view only. The largest of these classes are determined at compile-time using template
 * magic. As such, it is important to add all presenters, views and transitions to the
 * type lists in this class.
 *
 */
class FrontendHeapBase : public touchgfx::MVPHeap
{
public:
    /**
     * A list of all view types. Must end with meta::Nil.
     * @note All view types used in the application MUST be added to this list!
     */
    typedef touchgfx::meta::TypeList< SeznamView,
            touchgfx::meta::TypeList< Labirint_naslovnicaView,
            touchgfx::meta::TypeList< Kaca_naslovnicaView,
            touchgfx::meta::TypeList< LabirintView,
            touchgfx::meta::TypeList< KacaView,
            touchgfx::meta::Nil > > > >
            > GeneratedViewTypes;

    /**
     * Determine (compile time) the View type of largest size.
     */
    typedef touchgfx::meta::select_type_maxsize< GeneratedViewTypes >::type MaxGeneratedViewType;

    /**
     * A list of all presenter types. Must end with meta::Nil.
     * @note All presenter types used in the application MUST be added to this list!
     */
    typedef touchgfx::meta::TypeList< SeznamPresenter,
            touchgfx::meta::TypeList< Labirint_naslovnicaPresenter,
            touchgfx::meta::TypeList< Kaca_naslovnicaPresenter,
            touchgfx::meta::TypeList< LabirintPresenter,
            touchgfx::meta::TypeList< KacaPresenter,
            touchgfx::meta::Nil > > > >
            > GeneratedPresenterTypes;

    /**
     * Determine (compile time) the Presenter type of largest size.
     */
    typedef touchgfx::meta::select_type_maxsize< GeneratedPresenterTypes >::type MaxGeneratedPresenterType;

    /**
     * A list of all transition types. Must end with meta::Nil.
     * @note All transition types used in the application MUST be added to this list!
     */
    typedef touchgfx::meta::TypeList< touchgfx::NoTransition,
            touchgfx::meta::TypeList< CoverTransition<EAST>,
            touchgfx::meta::TypeList< CoverTransition<WEST>,
            touchgfx::meta::TypeList< BlockTransition,
            touchgfx::meta::Nil > > >
            > GeneratedTransitionTypes;

    /**
     * Determine (compile time) the Transition type of largest size.
     */
    typedef touchgfx::meta::select_type_maxsize< GeneratedTransitionTypes >::type MaxGeneratedTransitionType;

    virtual void gotoStartScreen(FrontendApplication& app)
    {
        app.gotoSeznamScreenNoTransition();
    }
protected:
    FrontendHeapBase(touchgfx::AbstractPartition& presenters, touchgfx::AbstractPartition& views, touchgfx::AbstractPartition& transitions, FrontendApplication& app)
        : MVPHeap(presenters, views, transitions, app)
    {

    }

};

#endif // FRONTENDHEAPBASE_HPP