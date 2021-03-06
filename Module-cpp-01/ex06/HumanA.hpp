/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 20:33:03 by rchallie          #+#    #+#             */
/*   Updated: 2020/10/03 11:43:35 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

// LIBS ========================================================================
#include "Weapon.hpp"
// =============================================================================

// PROTOTYPES ==================================================================
class HumanA;
// =============================================================================

// CLASSES DEFINITIONS =========================================================
class HumanA
{   
    public:
        HumanA(std::string name, Weapon& weapon);
        HumanA(const HumanA&);
        virtual ~HumanA();
        HumanA &operator=(const HumanA& op);

        void        attack();
    
    private:
        std::string _name;
        Weapon&     _weapon;
};
// =============================================================================

// FUNCTIONS PROTOYPES =========================================================
// =============================================================================

#endif